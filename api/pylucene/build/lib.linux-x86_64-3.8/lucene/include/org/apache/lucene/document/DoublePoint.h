#ifndef org_apache_lucene_document_DoublePoint_H
#define org_apache_lucene_document_DoublePoint_H

#include "org/apache/lucene/document/Field.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Number;
    class Class;
    class Double;
    class String;
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

        class DoublePoint : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_688af8c9c3ec673b,
            mid_decodeDimension_bc974b36f386a0c3,
            mid_encodeDimension_b42706c7ed84bf45,
            mid_newExactQuery_db56a8e54f4b71bd,
            mid_newRangeQuery_ac4cb7e9a584976e,
            mid_newRangeQuery_0fa5d711d525fbdd,
            mid_newSetQuery_c2ae4346604006c8,
            mid_newSetQuery_263cb7d6a0b161ae,
            mid_nextDown_d089f34703408a66,
            mid_nextUp_d089f34703408a66,
            mid_numericValue_f5813404cc5e3a1e,
            mid_pack_105476f259b8c172,
            mid_setBytesValue_0bdfd2603b7490a8,
            mid_setDoubleValue_3c435f10a3b1e038,
            mid_setDoubleValues_d5d56d9facba9bbe,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DoublePoint(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DoublePoint(const DoublePoint& obj) : ::org::apache::lucene::document::Field(obj) {}

          DoublePoint(const ::java::lang::String &, const JArray< jdouble > &);

          static jdouble decodeDimension(const JArray< jbyte > &, jint);
          static void encodeDimension(jdouble, const JArray< jbyte > &, jint);
          static ::org::apache::lucene::search::Query newExactQuery(const ::java::lang::String &, jdouble);
          static ::org::apache::lucene::search::Query newRangeQuery(const ::java::lang::String &, const JArray< jdouble > &, const JArray< jdouble > &);
          static ::org::apache::lucene::search::Query newRangeQuery(const ::java::lang::String &, jdouble, jdouble);
          static ::org::apache::lucene::search::Query newSetQuery(const ::java::lang::String &, const JArray< jdouble > &);
          static ::org::apache::lucene::search::Query newSetQuery(const ::java::lang::String &, const ::java::util::Collection &);
          static jdouble nextDown(jdouble);
          static jdouble nextUp(jdouble);
          ::java::lang::Number numericValue() const;
          static ::org::apache::lucene::util::BytesRef pack(const JArray< jdouble > &);
          void setBytesValue(const ::org::apache::lucene::util::BytesRef &) const;
          void setDoubleValue(jdouble) const;
          void setDoubleValues(const JArray< jdouble > &) const;
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
        extern PyType_Def PY_TYPE_DEF(DoublePoint);
        extern PyTypeObject *PY_TYPE(DoublePoint);

        class t_DoublePoint {
        public:
          PyObject_HEAD
          DoublePoint object;
          static PyObject *wrap_Object(const DoublePoint&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
