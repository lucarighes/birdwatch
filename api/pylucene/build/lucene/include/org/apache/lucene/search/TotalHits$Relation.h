#ifndef org_apache_lucene_search_TotalHits$Relation_H
#define org_apache_lucene_search_TotalHits$Relation_H

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
        class TotalHits$Relation;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class TotalHits$Relation : public ::java::lang::Enum {
         public:
          enum {
            mid_valueOf_7215b1ec30288dbb,
            mid_values_df728b48d0b10066,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TotalHits$Relation(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TotalHits$Relation(const TotalHits$Relation& obj) : ::java::lang::Enum(obj) {}

          static TotalHits$Relation *EQUAL_TO;
          static TotalHits$Relation *GREATER_THAN_OR_EQUAL_TO;

          static TotalHits$Relation valueOf(const ::java::lang::String &);
          static JArray< TotalHits$Relation > values();
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
        extern PyType_Def PY_TYPE_DEF(TotalHits$Relation);
        extern PyTypeObject *PY_TYPE(TotalHits$Relation);

        class t_TotalHits$Relation {
        public:
          PyObject_HEAD
          TotalHits$Relation object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_TotalHits$Relation *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const TotalHits$Relation&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const TotalHits$Relation&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
