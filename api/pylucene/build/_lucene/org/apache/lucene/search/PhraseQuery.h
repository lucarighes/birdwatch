#ifndef org_apache_lucene_search_PhraseQuery_H
#define org_apache_lucene_search_PhraseQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
        class Term;
      }
      namespace search {
        class IndexSearcher;
        class QueryVisitor;
        class ScoreMode;
        class Weight;
      }
      namespace util {
        class BytesRef;
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

        class PhraseQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_init$_e15507bf45c25446,
            mid_init$_890b82217556b281,
            mid_init$_0b968c11f9149986,
            mid_init$_baafb7a433bab358,
            mid_createWeight_f0ef0b5ea369ac06,
            mid_equals_8b72f2dcdde6fd1d,
            mid_getField_db9b55ba01e03e4b,
            mid_getPositions_d2c45ef07a322466,
            mid_getSlop_9972fcc56b44e79d,
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

          explicit PhraseQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PhraseQuery(const PhraseQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          PhraseQuery(const ::java::lang::String &, const JArray< ::java::lang::String > &);
          PhraseQuery(const ::java::lang::String &, const JArray< ::org::apache::lucene::util::BytesRef > &);
          PhraseQuery(jint, const ::java::lang::String &, const JArray< ::java::lang::String > &);
          PhraseQuery(jint, const ::java::lang::String &, const JArray< ::org::apache::lucene::util::BytesRef > &);

          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
          jboolean equals(const ::java::lang::Object &) const;
          ::java::lang::String getField() const;
          JArray< jint > getPositions() const;
          jint getSlop() const;
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
        extern PyType_Def PY_TYPE_DEF(PhraseQuery);
        extern PyTypeObject *PY_TYPE(PhraseQuery);

        class t_PhraseQuery {
        public:
          PyObject_HEAD
          PhraseQuery object;
          static PyObject *wrap_Object(const PhraseQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
