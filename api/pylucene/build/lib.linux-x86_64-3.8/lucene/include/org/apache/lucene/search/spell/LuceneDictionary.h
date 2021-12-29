#ifndef org_apache_lucene_search_spell_LuceneDictionary_H
#define org_apache_lucene_search_spell_LuceneDictionary_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace search {
        namespace spell {
          class Dictionary;
        }
        namespace suggest {
          class InputIterator;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
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

          class LuceneDictionary : public ::java::lang::Object {
           public:
            enum {
              mid_init$_456f925f19f7f45c,
              mid_getEntryIterator_58c408dcc07c62ab,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LuceneDictionary(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LuceneDictionary(const LuceneDictionary& obj) : ::java::lang::Object(obj) {}

            LuceneDictionary(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);

            ::org::apache::lucene::search::suggest::InputIterator getEntryIterator() const;
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
          extern PyType_Def PY_TYPE_DEF(LuceneDictionary);
          extern PyTypeObject *PY_TYPE(LuceneDictionary);

          class t_LuceneDictionary {
          public:
            PyObject_HEAD
            LuceneDictionary object;
            static PyObject *wrap_Object(const LuceneDictionary&);
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
