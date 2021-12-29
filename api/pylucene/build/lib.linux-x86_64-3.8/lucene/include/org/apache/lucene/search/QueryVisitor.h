#ifndef org_apache_lucene_search_QueryVisitor_H
#define org_apache_lucene_search_QueryVisitor_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
      }
      namespace search {
        class BooleanClause$Occur;
        class Query;
        class QueryVisitor;
      }
      namespace util {
        namespace automaton {
          class ByteRunAutomaton;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    namespace function {
      class Supplier;
    }
    class Set;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class QueryVisitor : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_acceptField_145b2d0af0c06b93,
            mid_consumeTerms_b8d9a943ea313dc0,
            mid_consumeTermsMatching_6fac7d3ec9ed559a,
            mid_getSubVisitor_cc768c513df0dad5,
            mid_termCollector_67121dca9fbd194e,
            mid_visitLeaf_ede25bb9d48237ac,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit QueryVisitor(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          QueryVisitor(const QueryVisitor& obj) : ::java::lang::Object(obj) {}

          static QueryVisitor *EMPTY_VISITOR;

          QueryVisitor();

          jboolean acceptField(const ::java::lang::String &) const;
          void consumeTerms(const ::org::apache::lucene::search::Query &, const JArray< ::org::apache::lucene::index::Term > &) const;
          void consumeTermsMatching(const ::org::apache::lucene::search::Query &, const ::java::lang::String &, const ::java::util::function::Supplier &) const;
          QueryVisitor getSubVisitor(const ::org::apache::lucene::search::BooleanClause$Occur &, const ::org::apache::lucene::search::Query &) const;
          static QueryVisitor termCollector(const ::java::util::Set &);
          void visitLeaf(const ::org::apache::lucene::search::Query &) const;
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
        extern PyType_Def PY_TYPE_DEF(QueryVisitor);
        extern PyTypeObject *PY_TYPE(QueryVisitor);

        class t_QueryVisitor {
        public:
          PyObject_HEAD
          QueryVisitor object;
          static PyObject *wrap_Object(const QueryVisitor&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
