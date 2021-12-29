#ifndef org_apache_lucene_facet_taxonomy_TaxonomyReader_H
#define org_apache_lucene_facet_taxonomy_TaxonomyReader_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class Closeable;
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          class ParallelTaxonomyArrays;
          class TaxonomyReader;
          class TaxonomyReader$ChildrenIterator;
          class FacetLabel;
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

          class TaxonomyReader : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_close_f2cc1bce94666404,
              mid_decRef_f2cc1bce94666404,
              mid_getChildren_4e31ca4cfcfd683d,
              mid_getCommitUserData_1c3426541413a55d,
              mid_getOrdinal_1e6795f28098d13d,
              mid_getOrdinal_14824fa100558ea2,
              mid_getParallelTaxonomyArrays_1e0e55a7443a6fd1,
              mid_getPath_2f8d8c81610d6b29,
              mid_getRefCount_9972fcc56b44e79d,
              mid_getSize_9972fcc56b44e79d,
              mid_incRef_f2cc1bce94666404,
              mid_openIfChanged_80589647fbe59fd1,
              mid_tryIncRef_8454bd5aa23fd11e,
              mid_doClose_f2cc1bce94666404,
              mid_doOpenIfChanged_f83f182c1358496d,
              mid_ensureOpen_f2cc1bce94666404,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TaxonomyReader(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TaxonomyReader(const TaxonomyReader& obj) : ::java::lang::Object(obj) {}

            static jint INVALID_ORDINAL;
            static jint ROOT_ORDINAL;

            TaxonomyReader();

            void close() const;
            void decRef() const;
            ::org::apache::lucene::facet::taxonomy::TaxonomyReader$ChildrenIterator getChildren(jint) const;
            ::java::util::Map getCommitUserData() const;
            jint getOrdinal(const ::org::apache::lucene::facet::taxonomy::FacetLabel &) const;
            jint getOrdinal(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
            ::org::apache::lucene::facet::taxonomy::ParallelTaxonomyArrays getParallelTaxonomyArrays() const;
            ::org::apache::lucene::facet::taxonomy::FacetLabel getPath(jint) const;
            jint getRefCount() const;
            jint getSize() const;
            void incRef() const;
            static TaxonomyReader openIfChanged(const TaxonomyReader &);
            jboolean tryIncRef() const;
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
          extern PyType_Def PY_TYPE_DEF(TaxonomyReader);
          extern PyTypeObject *PY_TYPE(TaxonomyReader);

          class t_TaxonomyReader {
          public:
            PyObject_HEAD
            TaxonomyReader object;
            static PyObject *wrap_Object(const TaxonomyReader&);
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
