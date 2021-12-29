#ifndef org_apache_lucene_analysis_miscellaneous_WordDelimiterIterator_H
#define org_apache_lucene_analysis_miscellaneous_WordDelimiterIterator_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace miscellaneous {

          class WordDelimiterIterator : public ::java::lang::Object {
           public:
            enum {
              mid_getType_4d5233a30cda5878,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit WordDelimiterIterator(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            WordDelimiterIterator(const WordDelimiterIterator& obj) : ::java::lang::Object(obj) {}

            static jint ALPHA;
            static jint ALPHANUM;
            static JArray< jbyte > *DEFAULT_WORD_DELIM_TABLE;
            static jint DONE;

            static jbyte getType(jint);
            ::java::lang::String toString() const;
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
      namespace analysis {
        namespace miscellaneous {
          extern PyType_Def PY_TYPE_DEF(WordDelimiterIterator);
          extern PyTypeObject *PY_TYPE(WordDelimiterIterator);

          class t_WordDelimiterIterator {
          public:
            PyObject_HEAD
            WordDelimiterIterator object;
            static PyObject *wrap_Object(const WordDelimiterIterator&);
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
