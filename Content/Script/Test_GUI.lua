--
-- DESCRIPTION
--
-- @COMPANY **
-- @AUTHOR **
-- @DATE ${date} ${time}
--

---@type NewWidgetBlueprint_C
local M = UnLua.Class()

--function M:Initialize(Initializer)
--end

--function M:PreConstruct(IsDesignTime)
--end

function M:Construct()
    if self.Button_29 then
        self.Button_29.OnClicked:Add(self ,self.PrintHelloWorld)
    end


end

function M:PrintHelloWorld()
    print("HelloWorld!")
end

--function M:Tick(MyGeometry, InDeltaTime)
--end

return M
