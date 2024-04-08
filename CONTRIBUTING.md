# Contributing Guidelines

## Legal

Contributions must be all your own work; plagiarism is not allowed.
By submitting a pull request, you agree to license your contribution
under the [license of this repository](./LICENSE.txt).

## Translations

Translations go in the appropriate folder named by the locale code.

Do not change the structure or formatting of the original (English) explanation when translating or updating translations.
You may change number formatting to fit the locale
(`42.33` may be formatted as `42,33` in a german translation for instance)
as long as it doesn't create ambiguities
(e.g. `[42,33, 13]` in an array would be disallowed and should either remain `[42.33, 13]` or use a different delimiter `[42,33; 13]`).

## Writing Explanations

See the [explanation of the Euclidean Algorithm](en/Basic%20Math/Euclidean%20algorithm.md)
for an example of how a good explanation may look like.

### Structure

You should structure your explanations using headings.
The top-level heading should be the name of the algorithm or data structure to be explained

Subsequent sub-headings *may* be:

1. Problem solved by the algorithm
2. Design/approach of the algorithm
3. Detailed (yet not too technical) description of the algorithm, usually including (pseudo)-code
4. Analysis (proof of correctness, best/worst/average cases, time & space complexity)
5. Walkthrough(s) of how the algorithm processes example input(s)
6. Application(s) of the algorithm
7. Further resources such as reference implementations, videos or other explanations. *If possible, link to The Algorithms' website as well (example: <https://the-algorithms.com/algorithm/quick-sort>).*

### Capitalization

- Use *Title Case* for headings.
- Start new sentences with a capital letter.

### Typographical Conventions

- Leave a space after punctuation such as `.`, `!`, `?`, `,`, `;` or `:`.
- Add a space before and after `-`. **Do not add a space before punctuation.**
- Add a space before an opening parenthesis `(`. Do not add a space before the closing parenthesis `)`.
- Add spaces around (but not inside) quotes. Use single quotes for quotes within quotes.

### Markdown Conventions

[GitHub-flavored Markdown is used](https://github.github.com/gfm/). Explanations should render well when viewed from GitHub.

- **Do not add redundant formatting.** Formatting should always be meaningful.
  If you apply a certain formatting to all elements of a certain kind (e.g. adding emphasis around all headings), you're doing something wrong.
- Use ATX-style "hashtag" headings: `#`, `##`, `###`, `####`, `#####`, `######` rather than Setext-style "underline" headings.
  Leave blank lines around headings. The first heading should always be `# Title`. Subheadings must be exactly one level deeper than their parents.
- Indent lists by two blanks. Prefer `-` over `*` for bulleted lists. Enumerate numbered lists correctly, starting at `1`.
- Use fenced code blocks (and specify the correct language) rather than using indented code blocks.
  Format code inside fenced code blocks properly (prefer pseudocode over code though). Leave blank lines around fenced code blocks.
- Use named links `[name](link)` rather than relying on automatic link detection or using `<>`-links.
  There are rarely good reasons to not give a link a descriptive name.
- Use HTML only if necessary (rarely - if ever - the case). Do not use HTML for unnecessary formatting.
