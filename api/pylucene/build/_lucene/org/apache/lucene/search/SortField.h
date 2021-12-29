#ifndef org_apache_lucene_search_SortField_H
#define org_apache_lucene_search_SortField_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Comparator;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class SortField;
        class IndexSearcher;
        class FieldComparatorSource;
        class SortField$Type;
        class FieldComparator;
      }
      namespace index {
        class IndexSorter;
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
      namespace search {

        class SortField : public ::java::lang::Object {
         public:
          enum {
            mid_init$_6811f13f8ecb0aa6,
            mid_init$_5217a6ade2078f85,
            mid_init$_d088f299e352f332,
            mid_init$_d27e052e5880c6f8,
            mid_equals_8b72f2dcdde6fd1d,
            mid_getBytesComparator_beb0414e0ec1de00,
            mid_getCanUsePoints_8454bd5aa23fd11e,
            mid_getComparator_d36dcbe0af6d9ef2,
            mid_getComparatorSource_46d6e7ab03c5c749,
            mid_getField_db9b55ba01e03e4b,
            mid_getIndexSorter_ee706dd57fd4883b,
            mid_getMissingValue_d6bcd06f3102c4d9,
            mid_getReverse_8454bd5aa23fd11e,
            mid_getType_9e07327298655963,
            mid_hashCode_9972fcc56b44e79d,
            mid_needsScores_8454bd5aa23fd11e,
            mid_rewrite_172444b870ec7c0f,
            mid_setBytesComparator_4703504c5d45d50f,
            mid_setCanUsePoints_f2cc1bce94666404,
            mid_setMissingValue_d20f626183f72f7d,
            mid_toString_db9b55ba01e03e4b,
            mid_readType_3ab48ff515d9874c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SortField(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SortField(const SortField& obj) : ::java::lang::Object(obj) {}

          static SortField *FIELD_DOC;
          static SortField *FIELD_SCORE;
          static ::java::lang::Object *STRING_FIRST;
          static ::java::lang::Object *STRING_LAST;

          SortField(const ::java::lang::String &, const ::org::apache::lucene::search::SortField$Type &);
          SortField(const ::java::lang::String &, const ::org::apache::lucene::search::FieldComparatorSource &);
          SortField(const ::java::lang::String &, const ::org::apache::lucene::search::SortField$Type &, jboolean);
          SortField(const ::java::lang::String &, const ::org::apache::lucene::search::FieldComparatorSource &, jboolean);

          jboolean equals(const ::java::lang::Object &) const;
          ::java::util::Comparator getBytesComparator() const;
          jboolean getCanUsePoints() const;
          ::org::apache::lucene::search::FieldComparator getComparator(jint, jint) const;
          ::org::apache::lucene::search::FieldComparatorSource getComparatorSource() const;
          ::java::lang::String getField() const;
          ::org::apache::lucene::index::IndexSorter getIndexSorter() const;
          ::java::lang::Object getMissingValue() const;
          jboolean getReverse() const;
          ::org::apache::lucene::search::SortField$Type getType() const;
          jint hashCode() const;
          jboolean needsScores() const;
          SortField rewrite(const ::org::apache::lucene::search::IndexSearcher &) const;
          void setBytesComparator(const ::java::util::Comparator &) const;
          void setCanUsePoints() const;
          void setMissingValue(const ::java::lang::Object &) const;
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
      namespace search {
        extern PyType_Def PY_TYPE_DEF(SortField);
        extern PyTypeObject *PY_TYPE(SortField);

        class t_SortField {
        public:
          PyObject_HEAD
          SortField object;
          static PyObject *wrap_Object(const SortField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
