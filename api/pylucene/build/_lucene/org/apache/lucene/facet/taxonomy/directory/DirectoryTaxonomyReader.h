#ifndef org_apache_lucene_facet_taxonomy_directory_DirectoryTaxonomyReader_H
#define org_apache_lucene_facet_taxonomy_directory_DirectoryTaxonomyReader_H

#include "org/apache/lucene/facet/taxonomy/TaxonomyReader.h"

namespace java {
  namespace util {
    class Map;
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
      namespace facet {
        namespace taxonomy {
          class ParallelTaxonomyArrays;
          namespace directory {
            class DirectoryTaxonomyWriter;
          }
          class FacetLabel;
        }
      }
      namespace util {
        class Accountable;
      }
      namespace store {
        class Directory;
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

            class DirectoryTaxonomyReader : public ::org::apache::lucene::facet::taxonomy::TaxonomyReader {
             public:
              enum {
                mid_init$_bcc8d5f7cd01fb8e,
                mid_init$_c51fd9fb1cf0392d,
                mid_getChildResources_d4dfbf7a26ff41df,
                mid_getCommitUserData_1c3426541413a55d,
                mid_getOrdinal_1e6795f28098d13d,
                mid_getParallelTaxonomyArrays_1e0e55a7443a6fd1,
                mid_getPath_2f8d8c81610d6b29,
                mid_getSize_9972fcc56b44e79d,
                mid_ramBytesUsed_2e5ae9edcb9b072f,
                mid_setCacheSize_040c4cd0390c5aff,
                mid_toString_d7593acad64ef635,
                mid_doClose_f2cc1bce94666404,
                mid_doOpenIfChanged_780976a7c0adf316,
                mid_openIndexReader_890b80518dc93fd7,
                mid_openIndexReader_f9995f21cd99d467,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DirectoryTaxonomyReader(jobject obj) : ::org::apache::lucene::facet::taxonomy::TaxonomyReader(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              DirectoryTaxonomyReader(const DirectoryTaxonomyReader& obj) : ::org::apache::lucene::facet::taxonomy::TaxonomyReader(obj) {}

              DirectoryTaxonomyReader(const ::org::apache::lucene::facet::taxonomy::directory::DirectoryTaxonomyWriter &);
              DirectoryTaxonomyReader(const ::org::apache::lucene::store::Directory &);

              ::java::util::Collection getChildResources() const;
              ::java::util::Map getCommitUserData() const;
              jint getOrdinal(const ::org::apache::lucene::facet::taxonomy::FacetLabel &) const;
              ::org::apache::lucene::facet::taxonomy::ParallelTaxonomyArrays getParallelTaxonomyArrays() const;
              ::org::apache::lucene::facet::taxonomy::FacetLabel getPath(jint) const;
              jint getSize() const;
              jlong ramBytesUsed() const;
              void setCacheSize(jint) const;
              ::java::lang::String toString(jint) const;
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
            extern PyType_Def PY_TYPE_DEF(DirectoryTaxonomyReader);
            extern PyTypeObject *PY_TYPE(DirectoryTaxonomyReader);

            class t_DirectoryTaxonomyReader {
            public:
              PyObject_HEAD
              DirectoryTaxonomyReader object;
              static PyObject *wrap_Object(const DirectoryTaxonomyReader&);
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
