#ifndef org_apache_lucene_facet_taxonomy_OrdinalMappingLeafReader_H
#define org_apache_lucene_facet_taxonomy_OrdinalMappingLeafReader_H

#include "org/apache/lucene/index/FilterLeafReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class BinaryDocValues;
        class LeafReader;
        class IndexReader$CacheHelper;
      }
      namespace facet {
        class FacetsConfig;
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

          class OrdinalMappingLeafReader : public ::org::apache::lucene::index::FilterLeafReader {
           public:
            enum {
              mid_init$_0bc004e527f620ef,
              mid_getBinaryDocValues_6cf59c3533d4df22,
              mid_getCoreCacheHelper_a64c414fea9a8cf6,
              mid_getReaderCacheHelper_a64c414fea9a8cf6,
              mid_getOrdinalsReader_e1b1523781142411,
              mid_encode_887f798643eedba4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OrdinalMappingLeafReader(jobject obj) : ::org::apache::lucene::index::FilterLeafReader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OrdinalMappingLeafReader(const OrdinalMappingLeafReader& obj) : ::org::apache::lucene::index::FilterLeafReader(obj) {}

            OrdinalMappingLeafReader(const ::org::apache::lucene::index::LeafReader &, const JArray< jint > &, const ::org::apache::lucene::facet::FacetsConfig &);

            ::org::apache::lucene::index::BinaryDocValues getBinaryDocValues(const ::java::lang::String &) const;
            ::org::apache::lucene::index::IndexReader$CacheHelper getCoreCacheHelper() const;
            ::org::apache::lucene::index::IndexReader$CacheHelper getReaderCacheHelper() const;
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
          extern PyType_Def PY_TYPE_DEF(OrdinalMappingLeafReader);
          extern PyTypeObject *PY_TYPE(OrdinalMappingLeafReader);

          class t_OrdinalMappingLeafReader {
          public:
            PyObject_HEAD
            OrdinalMappingLeafReader object;
            static PyObject *wrap_Object(const OrdinalMappingLeafReader&);
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
