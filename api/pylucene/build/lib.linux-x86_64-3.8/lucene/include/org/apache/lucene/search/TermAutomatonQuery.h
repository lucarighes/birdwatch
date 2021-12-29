#ifndef org_apache_lucene_search_TermAutomatonQuery_H
#define org_apache_lucene_search_TermAutomatonQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace search {
        class IndexSearcher;
        class QueryVisitor;
        class ScoreMode;
        class Weight;
      }
      namespace util {
        class Accountable;
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

        class TermAutomatonQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_init$_9fd2eb66a64e6f0f,
            mid_addAnyTransition_438c62480c481c65,
            mid_addTransition_e63620654f69bef5,
            mid_addTransition_bdfb6546ac213635,
            mid_createState_9972fcc56b44e79d,
            mid_createWeight_f0ef0b5ea369ac06,
            mid_equals_8b72f2dcdde6fd1d,
            mid_finish_f2cc1bce94666404,
            mid_finish_040c4cd0390c5aff,
            mid_hashCode_9972fcc56b44e79d,
            mid_ramBytesUsed_2e5ae9edcb9b072f,
            mid_rewrite_bb52f19a8254555c,
            mid_setAccept_b8f283cdbda5c964,
            mid_toDot_db9b55ba01e03e4b,
            mid_toString_9bfa75c9f141b67f,
            mid_visit_f9e6207006c5b6c1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermAutomatonQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TermAutomatonQuery(const TermAutomatonQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          TermAutomatonQuery(const ::java::lang::String &);

          void addAnyTransition(jint, jint) const;
          void addTransition(jint, jint, const ::java::lang::String &) const;
          void addTransition(jint, jint, const ::org::apache::lucene::util::BytesRef &) const;
          jint createState() const;
          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
          jboolean equals(const ::java::lang::Object &) const;
          void finish() const;
          void finish(jint) const;
          jint hashCode() const;
          jlong ramBytesUsed() const;
          ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &) const;
          void setAccept(jint, jboolean) const;
          ::java::lang::String toDot() const;
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
        extern PyType_Def PY_TYPE_DEF(TermAutomatonQuery);
        extern PyTypeObject *PY_TYPE(TermAutomatonQuery);

        class t_TermAutomatonQuery {
        public:
          PyObject_HEAD
          TermAutomatonQuery object;
          static PyObject *wrap_Object(const TermAutomatonQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
