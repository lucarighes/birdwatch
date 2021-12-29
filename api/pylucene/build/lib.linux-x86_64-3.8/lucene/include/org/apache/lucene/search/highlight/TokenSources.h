#ifndef org_apache_lucene_search_highlight_TokenSources_H
#define org_apache_lucene_search_highlight_TokenSources_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Terms;
        class IndexReader;
        class Fields;
      }
      namespace analysis {
        class Analyzer;
        class TokenStream;
      }
      namespace document {
        class Document;
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
      namespace search {
        namespace highlight {

          class TokenSources : public ::java::lang::Object {
           public:
            enum {
              mid_getAnyTokenStream_a4530dadf56d2552,
              mid_getAnyTokenStream_65a0921ab98ae57e,
              mid_getTermVectorTokenStreamOrNull_6c59ecca309a091d,
              mid_getTokenStream_73e2def171e28525,
              mid_getTokenStream_6b57471ec02a0766,
              mid_getTokenStream_cf4ebac918997c2f,
              mid_getTokenStream_6c9b451b2b7ddc6a,
              mid_getTokenStream_a4530dadf56d2552,
              mid_getTokenStream_e8d0cef511b8524a,
              mid_getTokenStreamWithOffsets_a9454c27326ecc70,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TokenSources(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TokenSources(const TokenSources& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::analysis::TokenStream getAnyTokenStream(const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &);
            static ::org::apache::lucene::analysis::TokenStream getAnyTokenStream(const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, const ::org::apache::lucene::document::Document &, const ::org::apache::lucene::analysis::Analyzer &);
            static ::org::apache::lucene::analysis::TokenStream getTermVectorTokenStreamOrNull(const ::java::lang::String &, const ::org::apache::lucene::index::Fields &, jint);
            static ::org::apache::lucene::analysis::TokenStream getTokenStream(const ::org::apache::lucene::index::Terms &);
            static ::org::apache::lucene::analysis::TokenStream getTokenStream(const ::org::apache::lucene::index::Terms &, jboolean);
            static ::org::apache::lucene::analysis::TokenStream getTokenStream(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &);
            static ::org::apache::lucene::analysis::TokenStream getTokenStream(const ::org::apache::lucene::document::Document &, const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &);
            static ::org::apache::lucene::analysis::TokenStream getTokenStream(const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &);
            static ::org::apache::lucene::analysis::TokenStream getTokenStream(const ::java::lang::String &, const ::org::apache::lucene::index::Fields &, const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &, jint);
            static ::org::apache::lucene::analysis::TokenStream getTokenStreamWithOffsets(const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &);
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
      namespace search {
        namespace highlight {
          extern PyType_Def PY_TYPE_DEF(TokenSources);
          extern PyTypeObject *PY_TYPE(TokenSources);

          class t_TokenSources {
          public:
            PyObject_HEAD
            TokenSources object;
            static PyObject *wrap_Object(const TokenSources&);
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
