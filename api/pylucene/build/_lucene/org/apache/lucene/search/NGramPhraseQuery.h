#ifndef org_apache_lucene_search_NGramPhraseQuery_H
#define org_apache_lucene_search_NGramPhraseQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
        class Term;
      }
      namespace search {
        class QueryVisitor;
        class PhraseQuery;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
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

        class NGramPhraseQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_init$_020fb847f2a0877d,
            mid_equals_8b72f2dcdde6fd1d,
            mid_getN_9972fcc56b44e79d,
            mid_getPositions_d2c45ef07a322466,
            mid_getTerms_6715d5a0d228688a,
            mid_hashCode_9972fcc56b44e79d,
            mid_rewrite_bb52f19a8254555c,
            mid_toString_9bfa75c9f141b67f,
            mid_visit_f9e6207006c5b6c1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NGramPhraseQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NGramPhraseQuery(const NGramPhraseQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          NGramPhraseQuery(jint, const ::org::apache::lucene::search::PhraseQuery &);

          jboolean equals(const ::java::lang::Object &) const;
          jint getN() const;
          JArray< jint > getPositions() const;
          JArray< ::org::apache::lucene::index::Term > getTerms() const;
          jint hashCode() const;
          ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
          ::java::lang::String toString(const ::java::lang::String &) const;
          void visit(const ::org::apache::lucene::search::QueryVisitor &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(NGramPhraseQuery);
        extern PyTypeObject *PY_TYPE(NGramPhraseQuery);

        class t_NGramPhraseQuery {
        public:
          PyObject_HEAD
          NGramPhraseQuery object;
          static PyObject *wrap_Object(const NGramPhraseQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
