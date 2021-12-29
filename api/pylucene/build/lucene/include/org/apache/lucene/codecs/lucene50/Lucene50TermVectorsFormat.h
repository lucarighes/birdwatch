#ifndef org_apache_lucene_codecs_lucene50_Lucene50TermVectorsFormat_H
#define org_apache_lucene_codecs_lucene50_Lucene50TermVectorsFormat_H

#include "org/apache/lucene/codecs/compressing/CompressingTermVectorsFormat.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene50 {

          class Lucene50TermVectorsFormat : public ::org::apache::lucene::codecs::compressing::CompressingTermVectorsFormat {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene50TermVectorsFormat(jobject obj) : ::org::apache::lucene::codecs::compressing::CompressingTermVectorsFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene50TermVectorsFormat(const Lucene50TermVectorsFormat& obj) : ::org::apache::lucene::codecs::compressing::CompressingTermVectorsFormat(obj) {}

            Lucene50TermVectorsFormat();
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
      namespace codecs {
        namespace lucene50 {
          extern PyType_Def PY_TYPE_DEF(Lucene50TermVectorsFormat);
          extern PyTypeObject *PY_TYPE(Lucene50TermVectorsFormat);

          class t_Lucene50TermVectorsFormat {
          public:
            PyObject_HEAD
            Lucene50TermVectorsFormat object;
            static PyObject *wrap_Object(const Lucene50TermVectorsFormat&);
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
