# big4-dc-disasm
Tool for decompiling Uncharted 4 scripts

# Tutorial
To decompile a script first find a script file that starts with `ss-\<name>.bin`
- The program will look for following folder: `sid1/sidbase.bin` in the same directory of the executable so **make sure its there otherwise there won't be any stringId resolution**
- **no `sidbase.bin` will be provided for Uncharted 4** (you can find it in the PC version)
- In this example we're going to use `ss-block-isl-spires-combat.bin`
Open the terminal and run the following command:

```
.\big4-dc-disasm .\ss-block-isl-spires-combat.bin > .\ss-block-isl-spires-combat.txt
```

This will redirect the output of the program to the file ss-block-isl-spires-combat.txt
