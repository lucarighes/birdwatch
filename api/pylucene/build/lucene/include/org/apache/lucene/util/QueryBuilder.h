#ifndef org_apache_lucene_util_QueryBuilder_H
#define org_apache_lucene_util_QueryBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class Analyzer;
      }
      namespace search {
        class BooleanClause$Occur;
        class Query;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class QueryBuilder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_651b708fb3f85e6e,
            mid_createBooleanQuery_e08cfaa30c1cfbe9,
            mid_createBooleanQuery_32c42696d464a916,
            mid_createMinShouldMatchQuery_391b6230ae9c102d,
            mid_createPhraseQuery_e08cfaa30c1cfbe9,
            mid_createPhraseQuery_3a5baa20d223c529,
            mid_getAnalyzer_75a99b097bd64493,
            mid_getAutoGenerateMultiTermSynonymsPhraseQuery_8454bd5aa23fd11e,
            mid_getEnableGraphQueries_8454bd5aa23fd11e,
            mid_getEnablePositionIncrements_8454bd5aa23fd11e,
            mid_setAnalyzer_651b708fb3f85e6e,
            mid_setAutoGenerateMultiTermSynonymsPhraseQuery_9d72768e8fdce2b7,
            mid_setEnableGraphQueries_9d72768e8fdce2b7,
            mid_setEnablePositionIncrements_9d72768e8fdce2b7,
            mid_newBooleanQuery_a51b33134513d073,
            mid_createFieldQuery_e8e6b32bb4ffe546,
            mid_createFieldQuery_e3cbfa5968dbd9f3,
            mid_createSpanQuery_0a0ab63d74e766be,
            mid_analyzeTerm_34d60f2901f19991,
            mid_analyzeBoolean_34d60f2901f19991,
            mid_analyzeMultiBoolean_cf0df92099681d2c,
            mid_analyzePhrase_3970aa327c879410,
            mid_analyzeMultiPhrase_3970aa327c879410,
            mid_analyzeGraphBoolean_cf0df92099681d2c,
            mid_analyzeGraphPhrase_0fd053efdf440b81,
            mid_newSynonymQuery_06a7929972d58dd3,
            mid_newGraphSynonymQuery_3eb578136a1e2f0d,
            mid_newTermQuery_3904569060347954,
            mid_newMultiPhraseQueryBuilder_07b8bd4c2c1ccc6c,
            mid_add_a3473b0850a560dc,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit QueryBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          QueryBuilder(const QueryBuilder& obj) : ::java::lang::Object(obj) {}

          QueryBuilder(const ::org::apache::lucene::analysis::Analyzer &);

          ::org::apache::lucene::search::Query createBooleanQuery(const ::java::lang::String &, const ::java::lang::String &) const;
          ::org::apache::lucene::search::Query createBooleanQuery(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::search::BooleanClause$Occur &) const;
          ::org::apache::lucene::search::Query createMinShouldMatchQuery(const ::java::lang::String &, const ::java::lang::String &, jfloat) const;
          ::org::apache::lucene::search::Query createPhraseQuery(const ::java::lang::String &, const ::java::lang::String &) const;
          ::org::apache::lucene::search::Query createPhraseQuery(const ::java::lang::String &, const ::java::lang::String &, jint) const;
          ::org::apache::lucene::analysis::Analyzer getAnalyzer() const;
          jboolean getAutoGenerateMultiTermSynonymsPhraseQuery() const;
          jboolean getEnableGraphQueries() const;
          jboolean getEnablePositionIncrements() const;
          void setAnalyzer(const ::org::apache::lucene::analysis::Analyzer &) const;
          void setAutoGenerateMultiTermSynonymsPhraseQuery(jboolean) const;
          void setEnableGraphQueries(jboolean) const;
          void setEnablePositionIncrements(jboolean) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(QueryBuilder);
        extern PyTypeObject *PY_TYPE(QueryBuilder);

        class t_QueryBuilder {
        public:
          PyObject_HEAD
          QueryBuilder object;
          static PyObject *wrap_Object(const QueryBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
