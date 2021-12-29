#ifndef org_apache_lucene_facet_taxonomy_directory_DirectoryTaxonomyWriter_H
#define org_apache_lucene_facet_taxonomy_directory_DirectoryTaxonomyWriter_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map$Entry;
  }
  namespace lang {
    class Class;
    class Iterable;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
      }
      namespace facet {
        namespace taxonomy {
          namespace writercache {
            class TaxonomyWriterCache;
          }
          namespace directory {
            class DirectoryTaxonomyWriter$OrdinalMap;
          }
          class TaxonomyWriter;
          class FacetLabel;
        }
      }
      namespace index {
        class IndexWriterConfig$OpenMode;
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
          namespace directory {

            class DirectoryTaxonomyWriter : public ::java::lang::Object {
             public:
              enum {
                mid_init$_c51fd9fb1cf0392d,
                mid_init$_8ec2c3e31afb3944,
                mid_init$_436d8c145bae4747,
                mid_addCategory_1e6795f28098d13d,
                mid_addTaxonomy_2dc4d499be3481a9,
                mid_close_f2cc1bce94666404,
                mid_commit_2e5ae9edcb9b072f,
                mid_defaultTaxonomyWriterCache_fd45971157017449,
                mid_getCache_fd45971157017449,
                mid_getDirectory_7452b086ce8219b2,
                mid_getLiveCommitData_7a21c115c1b038aa,
                mid_getParent_1e143afe1894d213,
                mid_getSize_9972fcc56b44e79d,
                mid_getTaxonomyEpoch_2e5ae9edcb9b072f,
                mid_prepareCommit_2e5ae9edcb9b072f,
                mid_replaceTaxonomy_c51fd9fb1cf0392d,
                mid_rollback_f2cc1bce94666404,
                mid_setCacheMissesUntilFill_040c4cd0390c5aff,
                mid_setLiveCommitData_870d7079aa6e0153,
                mid_openIndexWriter_a22bb78e12ee1da6,
                mid_createIndexWriterConfig_85208b7651de5894,
                mid_closeResources_f2cc1bce94666404,
                mid_findCategory_1e6795f28098d13d,
                mid_ensureOpen_f2cc1bce94666404,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DirectoryTaxonomyWriter(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              DirectoryTaxonomyWriter(const DirectoryTaxonomyWriter& obj) : ::java::lang::Object(obj) {}

              static ::java::lang::String *INDEX_EPOCH;

              DirectoryTaxonomyWriter(const ::org::apache::lucene::store::Directory &);
              DirectoryTaxonomyWriter(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::IndexWriterConfig$OpenMode &);
              DirectoryTaxonomyWriter(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::IndexWriterConfig$OpenMode &, const ::org::apache::lucene::facet::taxonomy::writercache::TaxonomyWriterCache &);

              jint addCategory(const ::org::apache::lucene::facet::taxonomy::FacetLabel &) const;
              void addTaxonomy(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::facet::taxonomy::directory::DirectoryTaxonomyWriter$OrdinalMap &) const;
              void close() const;
              jlong commit() const;
              static ::org::apache::lucene::facet::taxonomy::writercache::TaxonomyWriterCache defaultTaxonomyWriterCache();
              ::org::apache::lucene::facet::taxonomy::writercache::TaxonomyWriterCache getCache() const;
              ::org::apache::lucene::store::Directory getDirectory() const;
              ::java::lang::Iterable getLiveCommitData() const;
              jint getParent(jint) const;
              jint getSize() const;
              jlong getTaxonomyEpoch() const;
              jlong prepareCommit() const;
              void replaceTaxonomy(const ::org::apache::lucene::store::Directory &) const;
              void rollback() const;
              void setCacheMissesUntilFill(jint) const;
              void setLiveCommitData(const ::java::lang::Iterable &) const;
            };
          }
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
          namespace directory {
            extern PyType_Def PY_TYPE_DEF(DirectoryTaxonomyWriter);
            extern PyTypeObject *PY_TYPE(DirectoryTaxonomyWriter);

            class t_DirectoryTaxonomyWriter {
            public:
              PyObject_HEAD
              DirectoryTaxonomyWriter object;
              static PyObject *wrap_Object(const DirectoryTaxonomyWriter&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
