#ifndef org_apache_lucene_search_suggest_document_ContextQuery_H
#define org_apache_lucene_search_suggest_document_ContextQuery_H

#include "org/apache/lucene/search/suggest/document/CompletionQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class IndexSearcher;
        class QueryVisitor;
        class ScoreMode;
        class Weight;
      }
      namespace util {
        class Accountable;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
    class String;
    class CharSequence;
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
        namespace suggest {
          namespace document {

            class ContextQuery : public ::org::apache::lucene::search::suggest::document::CompletionQuery {
             public:
              enum {
                mid_init$_e45829547aa5d0c2,
                mid_addAllContexts_f2cc1bce94666404,
                mid_addContext_4b7f5e38f806ae55,
                mid_addContext_a597019738f1d59f,
                mid_addContext_a67f4380f3e4e8a1,
                mid_createWeight_f0ef0b5ea369ac06,
                mid_equals_8b72f2dcdde6fd1d,
                mid_hashCode_9972fcc56b44e79d,
                mid_ramBytesUsed_2e5ae9edcb9b072f,
                mid_toString_9bfa75c9f141b67f,
                mid_visit_f9e6207006c5b6c1,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ContextQuery(jobject obj) : ::org::apache::lucene::search::suggest::document::CompletionQuery(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ContextQuery(const ContextQuery& obj) : ::org::apache::lucene::search::suggest::document::CompletionQuery(obj) {}

              ContextQuery(const ::org::apache::lucene::search::suggest::document::CompletionQuery &);

              void addAllContexts() const;
              void addContext(const ::java::lang::CharSequence &) const;
              void addContext(const ::java::lang::CharSequence &, jfloat) const;
              void addContext(const ::java::lang::CharSequence &, jfloat, jboolean) const;
              ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
              jboolean equals(const ::java::lang::Object &) const;
              jint hashCode() const;
              jlong ramBytesUsed() const;
              ::java::lang::String toString(const ::java::lang::String &) const;
              void visit(const ::org::apache::lucene::search::QueryVisitor &) const;
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
      namespace search {
        namespace suggest {
          namespace document {
            extern PyType_Def PY_TYPE_DEF(ContextQuery);
            extern PyTypeObject *PY_TYPE(ContextQuery);

            class t_ContextQuery {
            public:
              PyObject_HEAD
              ContextQuery object;
              static PyObject *wrap_Object(const ContextQuery&);
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
