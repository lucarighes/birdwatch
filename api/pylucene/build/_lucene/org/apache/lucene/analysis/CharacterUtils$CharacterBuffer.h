#ifndef org_apache_lucene_analysis_CharacterUtils$CharacterBuffer_H
#define org_apache_lucene_analysis_CharacterUtils$CharacterBuffer_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {

        class CharacterUtils$CharacterBuffer : public ::java::lang::Object {
         public:
          enum {
            mid_getBuffer_e11cf13c9a887534,
            mid_getLength_9972fcc56b44e79d,
            mid_getOffset_9972fcc56b44e79d,
            mid_reset_f2cc1bce94666404,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CharacterUtils$CharacterBuffer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CharacterUtils$CharacterBuffer(const CharacterUtils$CharacterBuffer& obj) : ::java::lang::Object(obj) {}

          JArray< jchar > getBuffer() const;
          jint getLength() const;
          jint getOffset() const;
          void reset() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        extern PyType_Def PY_TYPE_DEF(CharacterUtils$CharacterBuffer);
        extern PyTypeObject *PY_TYPE(CharacterUtils$CharacterBuffer);

        class t_CharacterUtils$CharacterBuffer {
        public:
          PyObject_HEAD
          CharacterUtils$CharacterBuffer object;
          static PyObject *wrap_Object(const CharacterUtils$CharacterBuffer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
