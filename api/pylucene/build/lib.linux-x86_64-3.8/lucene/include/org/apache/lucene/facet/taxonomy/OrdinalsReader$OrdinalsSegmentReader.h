#ifndef org_apache_lucene_facet_taxonomy_OrdinalsReader$OrdinalsSegmentReader_H
#define org_apache_lucene_facet_taxonomy_OrdinalsReader$OrdinalsSegmentReader_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class IntsRef;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {

          class OrdinalsReader$OrdinalsSegmentReader : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_get_c36a226219ff2c18,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OrdinalsReader$OrdinalsSegmentReader(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OrdinalsReader$OrdinalsSegmentReader(const OrdinalsReader$OrdinalsSegmentReader& obj) : ::java::lang::Object(obj) {}

            OrdinalsReader$OrdinalsSegmentReader();

            void get(jint, const ::org::apache::lucene::util::IntsRef &) const;
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
      namespace facet {
        namespace taxonomy {
          extern PyType_Def PY_TYPE_DEF(OrdinalsReader$OrdinalsSegmentReader);
          extern PyTypeObject *PY_TYPE(OrdinalsReader$OrdinalsSegmentReader);

          class t_OrdinalsReader$OrdinalsSegmentReader {
          public:
            PyObject_HEAD
            OrdinalsReader$OrdinalsSegmentReader object;
            static PyObject *wrap_Object(const OrdinalsReader$OrdinalsSegmentReader&);
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
