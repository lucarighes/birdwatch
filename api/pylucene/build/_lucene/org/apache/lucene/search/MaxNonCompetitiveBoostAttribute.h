#ifndef org_apache_lucene_search_MaxNonCompetitiveBoostAttribute_H
#define org_apache_lucene_search_MaxNonCompetitiveBoostAttribute_H

#include "org/apache/lucene/util/Attribute.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
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

        class MaxNonCompetitiveBoostAttribute : public ::org::apache::lucene::util::Attribute {
         public:
          enum {
            mid_getCompetitiveTerm_7af2ea2e37ce82b8,
            mid_getMaxNonCompetitiveBoost_58aec2b64dff50c8,
            mid_setCompetitiveTerm_0bdfd2603b7490a8,
            mid_setMaxNonCompetitiveBoost_8e1d952dd65cdc3a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MaxNonCompetitiveBoostAttribute(jobject obj) : ::org::apache::lucene::util::Attribute(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MaxNonCompetitiveBoostAttribute(const MaxNonCompetitiveBoostAttribute& obj) : ::org::apache::lucene::util::Attribute(obj) {}

          ::org::apache::lucene::util::BytesRef getCompetitiveTerm() const;
          jfloat getMaxNonCompetitiveBoost() const;
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
        extern PyType_Def PY_TYPE_DEF(MaxNonCompetitiveBoostAttribute);
        extern PyTypeObject *PY_TYPE(MaxNonCompetitiveBoostAttribute);

        class t_MaxNonCompetitiveBoostAttribute {
        public:
          PyObject_HEAD
          MaxNonCompetitiveBoostAttribute object;
          static PyObject *wrap_Object(const MaxNonCompetitiveBoostAttribute&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
