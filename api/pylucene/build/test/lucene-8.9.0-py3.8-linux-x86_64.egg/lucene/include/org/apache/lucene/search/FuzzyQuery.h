#ifndef org_apache_lucene_search_FuzzyQuery_H
#define org_apache_lucene_search_FuzzyQuery_H

#include "org/apache/lucene/search/MultiTermQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
      }
      namespace search {
        class QueryVisitor;
      }
      namespace util {
        namespace automaton {
          class CompiledAutomaton;
        }
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class FuzzyQuery : public ::org::apache::lucene::search::MultiTermQuery {
         public:
          enum {
            mid_init$_32784f9c0ee449e6,
            mid_init$_d948bda7346ba4b9,
            mid_init$_2d22f4c380c508c4,
            mid_init$_47274f2f43f6691c,
            mid_equals_8b72f2dcdde6fd1d,
            mid_floatToEdits_d5349d97f03cc059,
            mid_getAutomata_9902dd107234d2e5,
            mid_getMaxEdits_9972fcc56b44e79d,
            mid_getPrefixLength_9972fcc56b44e79d,
            mid_getTerm_5e734526802c58d9,
            mid_getTranspositions_8454bd5aa23fd11e,
            mid_hashCode_9972fcc56b44e79d,
            mid_toString_9bfa75c9f141b67f,
            mid_visit_f9e6207006c5b6c1,
            mid_getTermsEnum_e75dd6286a51776d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FuzzyQuery(jobject obj) : ::org::apache::lucene::search::MultiTermQuery(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FuzzyQuery(const FuzzyQuery& obj) : ::org::apache::lucene::search::MultiTermQuery(obj) {}

          static jint defaultMaxEdits;
          static jint defaultMaxExpansions;
          static jfloat defaultMinSimilarity;
          static jint defaultPrefixLength;
          static jboolean defaultTranspositions;

          FuzzyQuery(const ::org::apache::lucene::index::Term &);
          FuzzyQuery(const ::org::apache::lucene::index::Term &, jint);
          FuzzyQuery(const ::org::apache::lucene::index::Term &, jint, jint);
          FuzzyQuery(const ::org::apache::lucene::index::Term &, jint, jint, jint, jboolean);

          jboolean equals(const ::java::lang::Object &) const;
          static jint floatToEdits(jfloat, jint);
          ::org::apache::lucene::util::automaton::CompiledAutomaton getAutomata() const;
          jint getMaxEdits() const;
          jint getPrefixLength() const;
          ::org::apache::lucene::index::Term getTerm() const;
          jboolean getTranspositions() const;
          jint hashCode() const;
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
        extern PyType_Def PY_TYPE_DEF(FuzzyQuery);
        extern PyTypeObject *PY_TYPE(FuzzyQuery);

        class t_FuzzyQuery {
        public:
          PyObject_HEAD
          FuzzyQuery object;
          static PyObject *wrap_Object(const FuzzyQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
