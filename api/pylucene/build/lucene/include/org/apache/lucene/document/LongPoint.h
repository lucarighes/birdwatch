#ifndef org_apache_lucene_document_LongPoint_H
#define org_apache_lucene_document_LongPoint_H

#include "org/apache/lucene/document/Field.h"

namespace java {
  namespace lang {
    class Long;
    class Number;
    class Class;
    class String;
  }
  namespace util {
    class Collection;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace search {
        class Query;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class LongPoint : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_713574b80c0518e2,
            mid_decodeDimension_d4ee5c8094735e0d,
            mid_encodeDimension_d29578c9e7af98d1,
            mid_newDistanceFeatureQuery_892c68083cdcf4d3,
            mid_newExactQuery_e80322a2f14dee9e,
            mid_newRangeQuery_e8bfb6169bf1df05,
            mid_newRangeQuery_fea81632216932e2,
            mid_newSetQuery_8e65ec12af2ce04c,
            mid_newSetQuery_263cb7d6a0b161ae,
            mid_numericValue_f5813404cc5e3a1e,
            mid_pack_07db68d069c15626,
            mid_setBytesValue_0bdfd2603b7490a8,
            mid_setLongValue_9c778c9bce6694df,
            mid_setLongValues_7f1c853abc1a9198,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LongPoint(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LongPoint(const LongPoint& obj) : ::org::apache::lucene::document::Field(obj) {}

          LongPoint(const ::java::lang::String &, const JArray< jlong > &);

          static jlong decodeDimension(const JArray< jbyte > &, jint);
          static void encodeDimension(jlong, const JArray< jbyte > &, jint);
          static ::org::apache::lucene::search::Query newDistanceFeatureQuery(const ::java::lang::String &, jfloat, jlong, jlong);
          static ::org::apache::lucene::search::Query newExactQuery(const ::java::lang::String &, jlong);
          static ::org::apache::lucene::search::Query newRangeQuery(const ::java::lang::String &, const JArray< jlong > &, const JArray< jlong > &);
          static ::org::apache::lucene::search::Query newRangeQuery(const ::java::lang::String &, jlong, jlong);
          static ::org::apache::lucene::search::Query newSetQuery(const ::java::lang::String &, const JArray< jlong > &);
          static ::org::apache::lucene::search::Query newSetQuery(const ::java::lang::String &, const ::java::util::Collection &);
          ::java::lang::Number numericValue() const;
          static ::org::apache::lucene::util::BytesRef pack(const JArray< jlong > &);
          void setBytesValue(const ::org::apache::lucene::util::BytesRef &) const;
          void setLongValue(jlong) const;
          void setLongValues(const JArray< jlong > &) const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(LongPoint);
        extern PyTypeObject *PY_TYPE(LongPoint);

        class t_LongPoint {
        public:
          PyObject_HEAD
          LongPoint object;
          static PyObject *wrap_Object(const LongPoint&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
