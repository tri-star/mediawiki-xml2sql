/* C code produced by gperf version 3.0.4 */
/* Command-line: gperf -gptoC -Nlu_elt keywords  */
/* Computed positions: -k'1,$' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 1 "keywords"

enum element {
  el_mediawiki,
  el_siteinfo,
  el_sitename,
  el_base,
  el_generator,
  el_case,
  el_namespaces,
  el_namespace,
  el_page,
  el_title,
  el_id,
  el_restrictions,
  el_revision,
  el_timestamp,
  el_contributor,
  el_username,
  el_ip,
  el_minor,
  el_comment,
  el_text,
  el_ns,
  el_parentid,
  el_sha1,
  el_model,
  el_format,
  el_redirect
};
#line 31 "keywords"
struct eltmap { char *name; enum element t; };

#define TOTAL_KEYWORDS 26
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 12
#define MIN_HASH_VALUE 4
#define MAX_HASH_VALUE 39
/* maximum key range = 36, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash (str, len)
     register const char *str;
     register unsigned int len;
{
  static const unsigned char asso_values[] =
    {
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 30,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40,  3,  5,
      15,  0,  0, 25, 40, 15, 40, 40,  5,  5,
      15, 15, 10, 40,  0,  5,  0, 10, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
      40, 40, 40, 40, 40, 40
    };
  return len + asso_values[(unsigned char)str[len - 1]] + asso_values[(unsigned char)str[0]];
}

#ifdef __GNUC__
__inline
#if defined __GNUC_STDC_INLINE__ || defined __GNUC_GNU_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
const struct eltmap *
lu_elt (str, len)
     register const char *str;
     register unsigned int len;
{
  static const struct eltmap wordlist[] =
    {
      {""}, {""}, {""}, {""},
#line 52 "keywords"
      {"text",         el_text},
#line 42 "keywords"
      {"title",        el_title},
#line 57 "keywords"
      {"format",       el_format},
#line 36 "keywords"
      {"base",         el_base},
#line 58 "keywords"
      {"redirect",     el_redirect},
#line 38 "keywords"
      {"case",         el_case},
#line 50 "keywords"
      {"minor",        el_minor},
      {""},
#line 51 "keywords"
      {"comment",      el_comment},
#line 35 "keywords"
      {"sitename",     el_sitename},
#line 41 "keywords"
      {"page",         el_page},
#line 56 "keywords"
      {"model",        el_model},
#line 47 "keywords"
      {"contributor",  el_contributor},
#line 44 "keywords"
      {"restrictions", el_restrictions},
#line 48 "keywords"
      {"username",     el_username},
#line 46 "keywords"
      {"timestamp",    el_timestamp},
      {""}, {""},
#line 53 "keywords"
      {"ns",           el_ns},
#line 45 "keywords"
      {"revision",     el_revision},
#line 40 "keywords"
      {"namespace",    el_namespace},
      {""}, {""},
#line 49 "keywords"
      {"ip",           el_ip},
#line 34 "keywords"
      {"siteinfo",     el_siteinfo},
#line 33 "keywords"
      {"mediawiki",    el_mediawiki},
#line 39 "keywords"
      {"namespaces",   el_namespaces},
      {""},
#line 43 "keywords"
      {"id",           el_id},
#line 54 "keywords"
      {"parentid",     el_parentid},
#line 37 "keywords"
      {"generator",    el_generator},
      {""}, {""}, {""}, {""},
#line 55 "keywords"
      {"sha1",         el_sha1}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
