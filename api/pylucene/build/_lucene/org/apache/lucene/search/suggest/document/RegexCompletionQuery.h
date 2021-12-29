#ifndef org_apache_lucene_search_suggest_document_RegexCompletionQuery_H
#define org_apache_lucene_search_suggest_document_RegexCompletionQuery_H

#include "org/apache/lucene/search/suggest/document/CompletionQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
      }
      namespace search {
        class IndexSearcher;
        namespace suggest {
          class BitsProducer;
        }
        class QueryVisitor;
        class ScoreMode;
        class Weight;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
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

            class RegexCompletionQuery : public ::org::apache::lucene::search::suggest::document::CompletionQuery {
             public:
              enum {
                mid_init$_32784f9c0ee449e6,
                mid_init$_84fdfa8770fbaf5d,
                mid_init$_2d22f4c380c508c4,
                mid_init$_798a374d46a0efc5,
                mid_createWeight_f0ef0b5ea369ac06,
                mid_equals_8b72f2dcdde6fd1d,
                mid_getFlags_9972fcc56b44e79d,
                mid_getMaxDeterminizedStates_9972fcc56b44e79d,
                mid_hashCode_9972fcc56b44e79d,
                mid_visit_f9e6207006c5b6c1,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit RegexCompletionQuery(jobject obj) : ::org::apache::lucene::search::suggest::document::CompletionQuery(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              RegexCompletionQuery(const RegexCompletionQuery& obj) : ::org::apache::lucene::search::suggest::document::CompletionQuery(obj) {}

              RegexCompletionQuery(const ::org::apache::lucene::index::Term &);
              RegexCompletionQuery(const ::org::apache::lucene::index::Term &, const ::org::apache::lucene::search::suggest::BitsProducer &);
              RegexCompletionQuery(const ::org::apache::lucene::index::Term &, jint, jint);
              RegexCompletionQuery(const ::org::apache::lucene::index::Term &, jint, jint, const ::org::apache::lucene::search::suggest::BitsProducer &);

              ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
              jboolean equals(const ::java::lang::Object &) const;
              jint getFlags() const;
              jint getMaxDeterminizedStates() const;
              jint hashCode() const;
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
            extern PyType_Def PY_TYPE_DEF(RegexCompletionQuery);
            extern PyTypeObject *PY_TYPE(RegexCompletionQuery);

            class t_RegexCompletionQuery {
            public:
              PyObject_HEAD
              RegexCompletionQuery object;
              static PyObject *wrap_Object(const RegexCompletionQuery&);
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
