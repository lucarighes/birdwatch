#ifndef org_apache_lucene_facet_taxonomy_OrdinalsReader_H
#define org_apache_lucene_facet_taxonomy_OrdinalsReader_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class LeafReaderContext;
      }
      namespace facet {
        namespace taxonomy {
          class OrdinalsReader$OrdinalsSegmentReader;
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
      namespace facet {
        namespace taxonomy {

          class OrdinalsReader : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_getIndexFieldName_db9b55ba01e03e4b,
              mid_getReader_ff225b04fcdc6f32,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OrdinalsReader(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OrdinalsReader(const OrdinalsReader& obj) : ::java::lang::Object(obj) {}

            OrdinalsReader();

            ::java::lang::String getIndexFieldName() const;
            ::org::apache::lucene::facet::taxonomy::OrdinalsReader$OrdinalsSegmentReader getReader(const ::org::apache::lucene::index::LeafReaderContext &) const;
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
          extern PyType_Def PY_TYPE_DEF(OrdinalsReader);
          extern PyTypeObject *PY_TYPE(OrdinalsReader);

          class t_OrdinalsReader {
          public:
            PyObject_HEAD
            OrdinalsReader object;
            static PyObject *wrap_Object(const OrdinalsReader&);
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
