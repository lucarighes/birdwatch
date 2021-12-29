#ifndef org_apache_lucene_search_MaxNonCompetitiveBoostAttributeImpl_H
#define org_apache_lucene_search_MaxNonCompetitiveBoostAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class AttributeReflector;
      }
      namespace search {
        class MaxNonCompetitiveBoostAttribute;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class MaxNonCompetitiveBoostAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_clear_f2cc1bce94666404,
            mid_copyTo_26346c38ebc9c090,
            mid_getCompetitiveTerm_7af2ea2e37ce82b8,
            mid_getMaxNonCompetitiveBoost_58aec2b64dff50c8,
            mid_reflectWith_b880c72ee67200af,
            mid_setCompetitiveTerm_0bdfd2603b7490a8,
            mid_setMaxNonCompetitiveBoost_8e1d952dd65cdc3a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MaxNonCompetitiveBoostAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MaxNonCompetitiveBoostAttributeImpl(const MaxNonCompetitiveBoostAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

          MaxNonCompetitiveBoostAttributeImpl();

          void clear() const;
          void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
          ::org::apache::lucene::util::BytesRef getCompetitiveTerm() const;
          jfloat getMaxNonCompetitiveBoost() const;
          void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
          void setCompetitiveTerm(const ::org::apache::lucene::util::BytesRef &) const;
          void setMaxNonCompetitiveBoost(jfloat) const;
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
        extern PyType_Def PY_TYPE_DEF(MaxNonCompetitiveBoostAttributeImpl);
        extern PyTypeObject *PY_TYPE(MaxNonCompetitiveBoostAttributeImpl);

        class t_MaxNonCompetitiveBoostAttributeImpl {
        public:
          PyObject_HEAD
          MaxNonCompetitiveBoostAttributeImpl object;
          static PyObject *wrap_Object(const MaxNonCompetitiveBoostAttributeImpl&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
