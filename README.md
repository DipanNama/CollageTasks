# CollageTasks: C Increment Lab

A small interactive companion to Dipan Nama's original prefix/postfix assignment. Separate statements are shown with i/j/k values, next/back/reset, JSON trace export and a C source download. The browser is a simulator for these exact statements, not a C compiler. Only theme is saved.

## Correctness fix

The original `printf("%d %d %d", i, ++i, i++)` reads/modifies i without sequencing: undefined behavior in C, not a predictable output. Historical source preserved in ORIGINAL_ASSIGNMENT.c for reference only; do not compile/run it as a correct example. The original extensionless binary remains an untouched historical artifact, not an updated build or recommended download. Run the corrected source instead.

Reference: https://en.cppreference.com/w/c/language/eval_order.html . Prefix assigns the incremented value; postfix assigns the old value, and the increment is complete by the end of that statement.

## Compile/run

`cc -std=c17 -Wall -Wextra -Werror -pedantic C_Programming_Assignment1.c -o increment`

`./increment 10`

Optional integer starts from -1000000 to 1000000, default 10. Values stay within signed 32-bit int range for this two-increment example. Built/tested on the host compiler's 32-bit-or-larger int; not tested on 16-bit targets.

## Tests/build

Node 22 + C compiler: `npm test` compiles with strict warnings and UBSan then runs 12 tests (values, boundaries, invalid inputs, C/JS parity). `npm run build` prepares only site assets and corrected C download in dist. No app dependency installation. Browser prefix/postfix, next/back/reset/export, mode/value invalidation, invalid input, theme and mobile tested. Desktop dark/mobile pixels inspected.

## Release workflow

Typed branch, local tests/build and visual checks, one PR/squash to main, one production Pages run. Main-only workflow with no branch/PR/tag builds. No profile changes. Original files/history remain available.

UI source: Pines buttons adapted from https://devdojo.com/pines/docs/button , discovery https://shoogle.dev/ , local Lucide icons (ISC, LICENSE-icons). No third-party scripts/fonts/assets.
