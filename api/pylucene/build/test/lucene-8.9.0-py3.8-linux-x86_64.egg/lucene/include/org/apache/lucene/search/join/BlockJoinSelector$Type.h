#ifndef org_apache_lucene_search_join_BlockJoinSelector$Type_H
#define org_apache_lucene_search_join_BlockJoinSelector$Type_H

#include "java/lang/Enum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace join {
          class BlockJoinSelector$Type;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace join {

          class BlockJoinSelector$Type : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_97553a65c885a107,
              mid_values_a0d82391621622c0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BlockJoinSelector$Type(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BlockJoinSelector$Type(const BlockJoinSelector$Type& obj) : ::java::lang::Enum(obj) {}

            static BlockJoinSelector$Type *MAX;
            static BlockJoinSelector$Type *MIN;

            static BlockJoinSelector$Type valueOf(const ::java::lang::String &);
            static JArray< BlockJoinSelector$Type > values();
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
      namespace search {
        namespace join {
          extern PyType_Def PY_TYPE_DEF(BlockJoinSelector$Type);
          extern PyTypeObject *PY_TYPE(BlockJoinSelector$Type);

          class t_BlockJoinSelector$Type {
          public:
            PyObject_HEAD
            BlockJoinSelector$Type object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_BlockJoinSelector$Type *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const BlockJoinSelector$Type&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const BlockJoinSelector$Type&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
