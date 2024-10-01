local M = {}

local function get_branchs()
	local git, notOk = io.popen("git branch --list", "r")
	if notOk then
		print("something went wrong: ", notOk)
		return
	end
	if type(git) ~= "nil" then
		local result = git:lines("*a")
		local branchs = {}
		local pos = 1
		for branch in string.gmatch(result(), "%a+") do
			table.insert(branchs, pos, branch)
			pos = pos + 1
		end
		git:close()
		return branchs
	end
end
M["--switch"] = function()
	local branchs = get_branchs()
	for _, branch in pairs(branchs or {}) do
		print(branch)
	end
	print("Please select a branch")
	local branch_name = io.read()
	local ok = os.execute(string.format("git switch %s", branch_name))
	if not ok then
		error("something went wrong to git branch command")
		os.exit(1)
	end
end

M[arg[1]]()
