#ifndef org_apache_lucene_document_HalfFloatPoint_H
#define org_apache_lucene_document_HalfFloatPoint_H

#include "org/apache/lucene/document/Field.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Number;
    class Float;
    class Class;
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

        class HalfFloatPoint : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_6526db32d123c83c,
            mid_decodeDimension_2431569bab1a7ba7,
            mid_encodeDimension_b1d07bb885aad1fe,
            mid_halfFloatToSortableShort_ed90335319c020d6,
            mid_newExactQuery_bb52d4f3f0fb1360,
            mid_newRangeQuery_a56c233be2e586b6,
            mid_newRangeQuery_2072c8e0fc502353,
            mid_newSetQuery_9d0d4ab95d8653ee,
            mid_newSetQuery_263cb7d6a0b161ae,
            mid_nextDown_8c8518d25218b9c5,
            mid_nextUp_8c8518d25218b9c5,
            mid_numericValue_f5813404cc5e3a1e,
            mid_setBytesValue_0bdfd2603b7490a8,
            mid_setFloatValue_8e1d952dd65cdc3a,
            mid_setFloatValues_86d8949a8a13e717,
            mid_sortableShortToHalfFloat_d390d786d4613247,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit HalfFloatPoint(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          HalfFloatPoint(const HalfFloatPoint& obj) : ::org::apache::lucene::document::Field(obj) {}

          static jint BYTES;

          HalfFloatPoint(const ::java::lang::String &, const JArray< jfloat > &);

          static jfloat decodeDimension(const JArray< jbyte > &, jint);
          static void encodeDimension(jfloat, const JArray< jbyte > &, jint);
          static jshort halfFloatToSortableShort(jfloat);
          static ::org::apache::lucene::search::Query newExactQuery(const ::java::lang::String &, jfloat);
          static ::org::apache::lucene::search::Query newRangeQuery(const ::java::lang::String &, const JArray< jfloat > &, const JArray< jfloat > &);
          static ::org::apache::lucene::search::Query newRangeQuery(const ::java::lang::String &, jfloat, jfloat);
          static ::org::apache::lucene::search::Query newSetQuery(const ::java::lang::String &, const JArray< jfloat > &);
          static ::org::apache::lucene::search::Query newSetQuery(const ::java::lang::String &, const ::java::util::Collection &);
          static jfloat nextDown(jfloat);
          static jfloat nextUp(jfloat);
          ::java::lang::Number numericValue() const;
          void setBytesValue(const ::org::apache::lucene::util::BytesRef &) const;
          void setFloatValue(jfloat) const;
          void setFloatValues(const JArray< jfloat > &) const;
          static jfloat sortableShortToHalfFloat(jshort);
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
        extern PyType_Def PY_TYPE_DEF(HalfFloatPoint);
        extern PyTypeObject *PY_TYPE(HalfFloatPoint);

        class t_HalfFloatPoint {
        public:
          PyObject_HEAD
          HalfFloatPoint object;
          static PyObject *wrap_Object(const HalfFloatPoint&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
