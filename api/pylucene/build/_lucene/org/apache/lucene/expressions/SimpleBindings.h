#ifndef org_apache_lucene_expressions_SimpleBindings_H
#define org_apache_lucene_expressions_SimpleBindings_H

#include "org/apache/lucene/expressions/Bindings.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class SortField;
        class DoubleValuesSource;
      }
      namespace expressions {
        class Expression;
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
      namespace expressions {

        class SimpleBindings : public ::org::apache::lucene::expressions::Bindings {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_add_ac50e9be1b02abdc,
            mid_add_22c45ea33f64e70d,
            mid_add_ab6036e9ef85ff14,
            mid_getDoubleValuesSource_ff23b83f44e75cdf,
            mid_validate_f2cc1bce94666404,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SimpleBindings(jobject obj) : ::org::apache::lucene::expressions::Bindings(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SimpleBindings(const SimpleBindings& obj) : ::org::apache::lucene::expressions::Bindings(obj) {}

          SimpleBindings();

          void add(const ::org::apache::lucene::search::SortField &) const;
          void add(const ::java::lang::String &, const ::org::apache::lucene::expressions::Expression &) const;
          void add(const ::java::lang::String &, const ::org::apache::lucene::search::DoubleValuesSource &) const;
          ::org::apache::lucene::search::DoubleValuesSource getDoubleValuesSource(const ::java::lang::String &) const;
          void validate() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace expressions {
        extern PyType_Def PY_TYPE_DEF(SimpleBindings);
        extern PyTypeObject *PY_TYPE(SimpleBindings);

        class t_SimpleBindings {
        public:
          PyObject_HEAD
          SimpleBindings object;
          static PyObject *wrap_Object(const SimpleBindings&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
