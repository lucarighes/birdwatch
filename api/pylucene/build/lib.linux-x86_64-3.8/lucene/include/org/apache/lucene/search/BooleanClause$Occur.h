#ifndef org_apache_lucene_search_BooleanClause$Occur_H
#define org_apache_lucene_search_BooleanClause$Occur_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class BooleanClause$Occur;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class BooleanClause$Occur : public ::java::lang::Enum {
         public:
          enum {
            mid_valueOf_d601e8335ce2ead2,
            mid_values_83793cc967a852b6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BooleanClause$Occur(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BooleanClause$Occur(const BooleanClause$Occur& obj) : ::java::lang::Enum(obj) {}

          static BooleanClause$Occur *FILTER;
          static BooleanClause$Occur *MUST;
          static BooleanClause$Occur *MUST_NOT;
          static BooleanClause$Occur *SHOULD;

          static BooleanClause$Occur valueOf(const ::java::lang::String &);
          static JArray< BooleanClause$Occur > values();
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
        extern PyType_Def PY_TYPE_DEF(BooleanClause$Occur);
        extern PyTypeObject *PY_TYPE(BooleanClause$Occur);

        class t_BooleanClause$Occur {
        public:
          PyObject_HEAD
          BooleanClause$Occur object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_BooleanClause$Occur *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const BooleanClause$Occur&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const BooleanClause$Occur&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
