#ifndef org_apache_lucene_facet_range_DoubleRange_H
#define org_apache_lucene_facet_range_DoubleRange_H

#include "org/apache/lucene/facet/range/Range.h"

namespace java {
  namespace lang {
    class Class;
    class Object;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class DoubleValuesSource;
        class Query;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace range {

          class DoubleRange : public ::org::apache::lucene::facet::range::Range {
           public:
            enum {
              mid_init$_11ebefdc30395571,
              mid_accept_17ce67a573fe19e0,
              mid_equals_8b72f2dcdde6fd1d,
              mid_getQuery_f1beaaad49a72c77,
              mid_hashCode_9972fcc56b44e79d,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            enum {
              fid_max,
              fid_min,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DoubleRange(jobject obj) : ::org::apache::lucene::facet::range::Range(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DoubleRange(const DoubleRange& obj) : ::org::apache::lucene::facet::range::Range(obj) {}

            jdouble _get_max() const;
            jdouble _get_min() const;

            DoubleRange(const ::java::lang::String &, jdouble, jboolean, jdouble, jboolean);

            jboolean accept(jdouble) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::search::Query getQuery(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::DoubleValuesSource &) const;
            jint hashCode() const;
            ::java::lang::String toString() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace range {
          extern PyType_Def PY_TYPE_DEF(DoubleRange);
          extern PyTypeObject *PY_TYPE(DoubleRange);

          class t_DoubleRange {
          public:
            PyObject_HEAD
            DoubleRange object;
            static PyObject *wrap_Object(const DoubleRange&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
