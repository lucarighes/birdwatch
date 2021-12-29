#ifndef org_apache_lucene_search_BoostAttributeImpl_H
#define org_apache_lucene_search_BoostAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class BoostAttribute;
      }
      namespace util {
        class AttributeReflector;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class BoostAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_clear_f2cc1bce94666404,
            mid_copyTo_26346c38ebc9c090,
            mid_getBoost_58aec2b64dff50c8,
            mid_reflectWith_b880c72ee67200af,
            mid_setBoost_8e1d952dd65cdc3a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BoostAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BoostAttributeImpl(const BoostAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

          BoostAttributeImpl();

          void clear() const;
          void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
          jfloat getBoost() const;
          void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
          void setBoost(jfloat) const;
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
        extern PyType_Def PY_TYPE_DEF(BoostAttributeImpl);
        extern PyTypeObject *PY_TYPE(BoostAttributeImpl);

        class t_BoostAttributeImpl {
        public:
          PyObject_HEAD
          BoostAttributeImpl object;
          static PyObject *wrap_Object(const BoostAttributeImpl&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
