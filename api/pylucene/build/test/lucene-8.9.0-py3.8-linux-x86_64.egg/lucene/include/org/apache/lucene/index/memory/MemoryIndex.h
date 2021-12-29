#ifndef org_apache_lucene_index_memory_MemoryIndex_H
#define org_apache_lucene_index_memory_MemoryIndex_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {
          class Similarity;
        }
        class IndexSearcher;
        class Query;
      }
      namespace index {
        class IndexableField;
        namespace memory {
          class MemoryIndex;
        }
      }
      namespace analysis {
        class Analyzer;
        class TokenStream;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
    class Iterable;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        namespace memory {

          class MemoryIndex : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_9d72768e8fdce2b7,
              mid_init$_33bb9a5a88dc139c,
              mid_addField_c5ab6d211d8d31bc,
              mid_addField_2b322655a8d444d6,
              mid_addField_e6c0692bedddc8ee,
              mid_addField_fc6d1367e0b27988,
              mid_addField_b5bf5c0a1e9f5ef2,
              mid_createSearcher_7ca5beb9bbb661b0,
              mid_freeze_f2cc1bce94666404,
              mid_fromDocument_d28a879986211313,
              mid_fromDocument_ab44c12725686388,
              mid_fromDocument_d9fca102a2e3ef61,
              mid_keywordTokenStream_84c852cba894c7a7,
              mid_reset_f2cc1bce94666404,
              mid_search_be984eeabd072611,
              mid_setSimilarity_b66836c611a69874,
              mid_toStringDebug_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MemoryIndex(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MemoryIndex(const MemoryIndex& obj) : ::java::lang::Object(obj) {}

            MemoryIndex();
            MemoryIndex(jboolean);
            MemoryIndex(jboolean, jboolean);

            void addField(const ::java::lang::String &, const ::org::apache::lucene::analysis::TokenStream &) const;
            void addField(const ::org::apache::lucene::index::IndexableField &, const ::org::apache::lucene::analysis::Analyzer &) const;
            void addField(const ::java::lang::String &, const ::org::apache::lucene::analysis::TokenStream &, jint) const;
            void addField(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &) const;
            void addField(const ::java::lang::String &, const ::org::apache::lucene::analysis::TokenStream &, jint, jint) const;
            ::org::apache::lucene::search::IndexSearcher createSearcher() const;
            void freeze() const;
            static MemoryIndex fromDocument(const ::java::lang::Iterable &, const ::org::apache::lucene::analysis::Analyzer &);
            static MemoryIndex fromDocument(const ::java::lang::Iterable &, const ::org::apache::lucene::analysis::Analyzer &, jboolean, jboolean);
            static MemoryIndex fromDocument(const ::java::lang::Iterable &, const ::org::apache::lucene::analysis::Analyzer &, jboolean, jboolean, jlong);
            ::org::apache::lucene::analysis::TokenStream keywordTokenStream(const ::java::util::Collection &) const;
            void reset() const;
            jfloat search(const ::org::apache::lucene::search::Query &) const;
            void setSimilarity(const ::org::apache::lucene::search::similarities::Similarity &) const;
            ::java::lang::String toStringDebug() const;
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
      namespace index {
        namespace memory {
          extern PyType_Def PY_TYPE_DEF(MemoryIndex);
          extern PyTypeObject *PY_TYPE(MemoryIndex);

          class t_MemoryIndex {
          public:
            PyObject_HEAD
            MemoryIndex object;
            static PyObject *wrap_Object(const MemoryIndex&);
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
