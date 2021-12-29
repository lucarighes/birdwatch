#ifndef org_apache_lucene_analysis_ja_JapaneseNumberFilter$NumberBuffer_H
#define org_apache_lucene_analysis_ja_JapaneseNumberFilter$NumberBuffer_H

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
        namespace ja {

          class JapaneseNumberFilter$NumberBuffer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_9fd2eb66a64e6f0f,
              mid_advance_f2cc1bce94666404,
              mid_charAt_ebc61ec1e57770d1,
              mid_length_9972fcc56b44e79d,
              mid_position_9972fcc56b44e79d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit JapaneseNumberFilter$NumberBuffer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            JapaneseNumberFilter$NumberBuffer(const JapaneseNumberFilter$NumberBuffer& obj) : ::java::lang::Object(obj) {}

            JapaneseNumberFilter$NumberBuffer(const ::java::lang::String &);

            void advance() const;
            jchar charAt(jint) const;
            jint length() const;
            jint position() const;
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
        namespace ja {
          extern PyType_Def PY_TYPE_DEF(JapaneseNumberFilter$NumberBuffer);
          extern PyTypeObject *PY_TYPE(JapaneseNumberFilter$NumberBuffer);

          class t_JapaneseNumberFilter$NumberBuffer {
          public:
            PyObject_HEAD
            JapaneseNumberFilter$NumberBuffer object;
            static PyObject *wrap_Object(const JapaneseNumberFilter$NumberBuffer&);
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
