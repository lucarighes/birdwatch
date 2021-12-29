#ifndef org_apache_lucene_facet_taxonomy_CachedOrdinalsReader_H
#define org_apache_lucene_facet_taxonomy_CachedOrdinalsReader_H

#include "org/apache/lucene/facet/taxonomy/OrdinalsReader.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class LeafReaderContext;
      }
      namespace util {
        class Accountable;
      }
      namespace facet {
        namespace taxonomy {
          class OrdinalsReader$OrdinalsSegmentReader;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {

          class CachedOrdinalsReader : public ::org::apache::lucene::facet::taxonomy::OrdinalsReader {
           public:
            enum {
              mid_init$_f7f1bfb29612a625,
              mid_getChildResources_d4dfbf7a26ff41df,
              mid_getIndexFieldName_db9b55ba01e03e4b,
              mid_getReader_ff225b04fcdc6f32,
              mid_ramBytesUsed_2e5ae9edcb9b072f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CachedOrdinalsReader(jobject obj) : ::org::apache::lucene::facet::taxonomy::OrdinalsReader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CachedOrdinalsReader(const CachedOrdinalsReader& obj) : ::org::apache::lucene::facet::taxonomy::OrdinalsReader(obj) {}

            CachedOrdinalsReader(const ::org::apache::lucene::facet::taxonomy::OrdinalsReader &);

            ::java::util::Collection getChildResources() const;
            ::java::lang::String getIndexFieldName() const;
            ::org::apache::lucene::facet::taxonomy::OrdinalsReader$OrdinalsSegmentReader getReader(const ::org::apache::lucene::index::LeafReaderContext &) const;
            jlong ramBytesUsed() const;
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
          extern PyType_Def PY_TYPE_DEF(CachedOrdinalsReader);
          extern PyTypeObject *PY_TYPE(CachedOrdinalsReader);

          class t_CachedOrdinalsReader {
          public:
            PyObject_HEAD
            CachedOrdinalsReader object;
            static PyObject *wrap_Object(const CachedOrdinalsReader&);
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
