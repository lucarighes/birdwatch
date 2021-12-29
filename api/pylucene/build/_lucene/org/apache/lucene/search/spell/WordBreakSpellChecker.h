#ifndef org_apache_lucene_search_spell_WordBreakSpellChecker_H
#define org_apache_lucene_search_spell_WordBreakSpellChecker_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spell {
          class SuggestWord;
          class SuggestMode;
          class WordBreakSpellChecker$BreakSuggestionSortMethod;
          class CombineSuggestion;
        }
      }
      namespace index {
        class IndexReader;
        class Term;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spell {

          class WordBreakSpellChecker : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_getMaxChanges_9972fcc56b44e79d,
              mid_getMaxCombineWordLength_9972fcc56b44e79d,
              mid_getMaxEvaluations_9972fcc56b44e79d,
              mid_getMinBreakWordLength_9972fcc56b44e79d,
              mid_getMinSuggestionFrequency_9972fcc56b44e79d,
              mid_setMaxChanges_040c4cd0390c5aff,
              mid_setMaxCombineWordLength_040c4cd0390c5aff,
              mid_setMaxEvaluations_040c4cd0390c5aff,
              mid_setMinBreakWordLength_040c4cd0390c5aff,
              mid_setMinSuggestionFrequency_040c4cd0390c5aff,
              mid_suggestWordBreaks_4d67f834f87a2229,
              mid_suggestWordCombinations_90dce80bc4f5daa1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit WordBreakSpellChecker(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            WordBreakSpellChecker(const WordBreakSpellChecker& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::index::Term *SEPARATOR_TERM;

            WordBreakSpellChecker();

            jint getMaxChanges() const;
            jint getMaxCombineWordLength() const;
            jint getMaxEvaluations() const;
            jint getMinBreakWordLength() const;
            jint getMinSuggestionFrequency() const;
            void setMaxChanges(jint) const;
            void setMaxCombineWordLength(jint) const;
            void setMaxEvaluations(jint) const;
            void setMinBreakWordLength(jint) const;
            void setMinSuggestionFrequency(jint) const;
            JArray< JArray< ::org::apache::lucene::search::spell::SuggestWord > > suggestWordBreaks(const ::org::apache::lucene::index::Term &, jint, const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::search::spell::SuggestMode &, const ::org::apache::lucene::search::spell::WordBreakSpellChecker$BreakSuggestionSortMethod &) const;
            JArray< ::org::apache::lucene::search::spell::CombineSuggestion > suggestWordCombinations(const JArray< ::org::apache::lucene::index::Term > &, jint, const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::search::spell::SuggestMode &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spell {
          extern PyType_Def PY_TYPE_DEF(WordBreakSpellChecker);
          extern PyTypeObject *PY_TYPE(WordBreakSpellChecker);

          class t_WordBreakSpellChecker {
          public:
            PyObject_HEAD
            WordBreakSpellChecker object;
            static PyObject *wrap_Object(const WordBreakSpellChecker&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
