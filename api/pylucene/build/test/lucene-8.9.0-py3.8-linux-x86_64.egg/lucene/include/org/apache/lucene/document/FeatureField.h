#ifndef org_apache_lucene_document_FeatureField_H
#define org_apache_lucene_document_FeatureField_H

#include "org/apache/lucene/document/Field.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class SortField;
        class DoubleValuesSource;
        class Query;
      }
      namespace analysis {
        class Analyzer;
        class TokenStream;
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
      namespace document {

        class FeatureField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_6873ae1485a7acdd,
            mid_newDoubleValues_4d98d82207bb8f7a,
            mid_newFeatureSort_df24281c3254b56a,
            mid_newLinearQuery_391b6230ae9c102d,
            mid_newLogQuery_3635b2bd9103efa5,
            mid_newSaturationQuery_e08cfaa30c1cfbe9,
            mid_newSaturationQuery_3635b2bd9103efa5,
            mid_newSigmoidQuery_d29429f1ea13293c,
            mid_setFeatureValue_8e1d952dd65cdc3a,
            mid_tokenStream_c1cd9ee6ce43641f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FeatureField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FeatureField(const FeatureField& obj) : ::org::apache::lucene::document::Field(obj) {}

          FeatureField(const ::java::lang::String &, const ::java::lang::String &, jfloat);

          static ::org::apache::lucene::search::DoubleValuesSource newDoubleValues(const ::java::lang::String &, const ::java::lang::String &);
          static ::org::apache::lucene::search::SortField newFeatureSort(const ::java::lang::String &, const ::java::lang::String &);
          static ::org::apache::lucene::search::Query newLinearQuery(const ::java::lang::String &, const ::java::lang::String &, jfloat);
          static ::org::apache::lucene::search::Query newLogQuery(const ::java::lang::String &, const ::java::lang::String &, jfloat, jfloat);
          static ::org::apache::lucene::search::Query newSaturationQuery(const ::java::lang::String &, const ::java::lang::String &);
          static ::org::apache::lucene::search::Query newSaturationQuery(const ::java::lang::String &, const ::java::lang::String &, jfloat, jfloat);
          static ::org::apache::lucene::search::Query newSigmoidQuery(const ::java::lang::String &, const ::java::lang::String &, jfloat, jfloat, jfloat);
          void setFeatureValue(jfloat) const;
          ::org::apache::lucene::analysis::TokenStream tokenStream(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::TokenStream &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        extern PyType_Def PY_TYPE_DEF(FeatureField);
        extern PyTypeObject *PY_TYPE(FeatureField);

        class t_FeatureField {
        public:
          PyObject_HEAD
          FeatureField object;
          static PyObject *wrap_Object(const FeatureField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
