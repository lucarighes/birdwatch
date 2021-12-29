#ifndef org_apache_lucene_facet_taxonomy_DocValuesOrdinalsReader_H
#define org_apache_lucene_facet_taxonomy_DocValuesOrdinalsReader_H

#include "org/apache/lucene/facet/taxonomy/OrdinalsReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class IntsRef;
        class BytesRef;
      }
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

          class DocValuesOrdinalsReader : public ::org::apache::lucene::facet::taxonomy::OrdinalsReader {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_9fd2eb66a64e6f0f,
              mid_decode_930a84cc4b64ce1b,
              mid_getIndexFieldName_db9b55ba01e03e4b,
              mid_getReader_ff225b04fcdc6f32,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DocValuesOrdinalsReader(jobject obj) : ::org::apache::lucene::facet::taxonomy::OrdinalsReader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DocValuesOrdinalsReader(const DocValuesOrdinalsReader& obj) : ::org::apache::lucene::facet::taxonomy::OrdinalsReader(obj) {}

            DocValuesOrdinalsReader();
            DocValuesOrdinalsReader(const ::java::lang::String &);

            void decode(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::IntsRef &) const;
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
          extern PyType_Def PY_TYPE_DEF(DocValuesOrdinalsReader);
          extern PyTypeObject *PY_TYPE(DocValuesOrdinalsReader);

          class t_DocValuesOrdinalsReader {
          public:
            PyObject_HEAD
            DocValuesOrdinalsReader object;
            static PyObject *wrap_Object(const DocValuesOrdinalsReader&);
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
