#ifndef org_apache_lucene_search_spell_WordBreakSpellChecker$BreakSuggestionSortMethod_H
#define org_apache_lucene_search_spell_WordBreakSpellChecker$BreakSuggestionSortMethod_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spell {
          class WordBreakSpellChecker$BreakSuggestionSortMethod;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spell {

          class WordBreakSpellChecker$BreakSuggestionSortMethod : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_672325964d93fdf7,
              mid_values_aa532b676f4da596,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit WordBreakSpellChecker$BreakSuggestionSortMethod(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            WordBreakSpellChecker$BreakSuggestionSortMethod(const WordBreakSpellChecker$BreakSuggestionSortMethod& obj) : ::java::lang::Enum(obj) {}

            static WordBreakSpellChecker$BreakSuggestionSortMethod *NUM_CHANGES_THEN_MAX_FREQUENCY;
            static WordBreakSpellChecker$BreakSuggestionSortMethod *NUM_CHANGES_THEN_SUMMED_FREQUENCY;

            static WordBreakSpellChecker$BreakSuggestionSortMethod valueOf(const ::java::lang::String &);
            static JArray< WordBreakSpellChecker$BreakSuggestionSortMethod > values();
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
          extern PyType_Def PY_TYPE_DEF(WordBreakSpellChecker$BreakSuggestionSortMethod);
          extern PyTypeObject *PY_TYPE(WordBreakSpellChecker$BreakSuggestionSortMethod);

          class t_WordBreakSpellChecker$BreakSuggestionSortMethod {
          public:
            PyObject_HEAD
            WordBreakSpellChecker$BreakSuggestionSortMethod object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_WordBreakSpellChecker$BreakSuggestionSortMethod *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const WordBreakSpellChecker$BreakSuggestionSortMethod&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const WordBreakSpellChecker$BreakSuggestionSortMethod&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
