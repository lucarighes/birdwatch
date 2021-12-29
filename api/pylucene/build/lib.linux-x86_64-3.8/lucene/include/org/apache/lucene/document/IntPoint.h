#ifndef org_apache_lucene_document_IntPoint_H
#define org_apache_lucene_document_IntPoint_H

#include "org/apache/lucene/document/Field.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Number;
    class Class;
    class Integer;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace util {
        class BytesRef;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class IntPoint : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_89fa4a1bfff971b9,
            mid_decodeDimension_7cdc0fb0850d95a0,
            mid_encodeDimension_e2a2eb3c904536ac,
            mid_newExactQuery_711c301244722ef0,
            mid_newRangeQuery_4d014fedea4aa22e,
            mid_newRangeQuery_8499548c7684a46a,
            mid_newSetQuery_3dcc3ab3a728f7cf,
            mid_newSetQuery_263cb7d6a0b161ae,
            mid_numericValue_f5813404cc5e3a1e,
            mid_pack_e3e31b1e78c32fe7,
            mid_setBytesValue_0bdfd2603b7490a8,
            mid_setIntValue_040c4cd0390c5aff,
            mid_setIntValues_263e68476cd076a9,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IntPoint(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IntPoint(const IntPoint& obj) : ::org::apache::lucene::document::Field(obj) {}

          IntPoint(const ::java::lang::String &, const JArray< jint > &);

          static jint decodeDimension(const JArray< jbyte > &, jint);
          static void encodeDimension(jint, const JArray< jbyte > &, jint);
          static ::org::apache::lucene::search::Query newExactQuery(const ::java::lang::String &, jint);
          static ::org::apache::lucene::search::Query newRangeQuery(const ::java::lang::String &, const JArray< jint > &, const JArray< jint > &);
          static ::org::apache::lucene::search::Query newRangeQuery(const ::java::lang::String &, jint, jint);
          static ::org::apache::lucene::search::Query newSetQuery(const ::java::lang::String &, const JArray< jint > &);
          static ::org::apache::lucene::search::Query newSetQuery(const ::java::lang::String &, const ::java::util::Collection &);
          ::java::lang::Number numericValue() const;
          static ::org::apache::lucene::util::BytesRef pack(const JArray< jint > &);
          void setBytesValue(const ::org::apache::lucene::util::BytesRef &) const;
          void setIntValue(jint) const;
          void setIntValues(const JArray< jint > &) const;
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
        extern PyType_Def PY_TYPE_DEF(IntPoint);
        extern PyTypeObject *PY_TYPE(IntPoint);

        class t_IntPoint {
        public:
          PyObject_HEAD
          IntPoint object;
          static PyObject *wrap_Object(const IntPoint&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
