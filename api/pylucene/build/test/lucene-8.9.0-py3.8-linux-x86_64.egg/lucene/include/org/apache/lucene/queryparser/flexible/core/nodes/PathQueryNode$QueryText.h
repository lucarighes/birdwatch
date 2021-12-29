#ifndef org_apache_lucene_queryparser_flexible_core_nodes_PathQueryNode$QueryText_H
#define org_apache_lucene_queryparser_flexible_core_nodes_PathQueryNode$QueryText_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Cloneable;
    class Class;
    class String;
    class CharSequence;
    class CloneNotSupportedException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {
              class PathQueryNode$QueryText;
            }
          }
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {

              class PathQueryNode$QueryText : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_1a9fff4dae4e12f0,
                  mid_clone_fb8caec6ffa526fd,
                  mid_getBegin_9972fcc56b44e79d,
                  mid_getEnd_9972fcc56b44e79d,
                  mid_getValue_ba44900ab7d793b9,
                  mid_toString_db9b55ba01e03e4b,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit PathQueryNode$QueryText(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                PathQueryNode$QueryText(const PathQueryNode$QueryText& obj) : ::java::lang::Object(obj) {}

                PathQueryNode$QueryText(const ::java::lang::CharSequence &, jint, jint);

                PathQueryNode$QueryText clone() const;
                jint getBegin() const;
                jint getEnd() const;
                ::java::lang::CharSequence getValue() const;
                ::java::lang::String toString() const;
              };
            }
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {
              extern PyType_Def PY_TYPE_DEF(PathQueryNode$QueryText);
              extern PyTypeObject *PY_TYPE(PathQueryNode$QueryText);

              class t_PathQueryNode$QueryText {
              public:
                PyObject_HEAD
                PathQueryNode$QueryText object;
                static PyObject *wrap_Object(const PathQueryNode$QueryText&);
                static PyObject *wrap_jobject(const jobject&);
                static void install(PyObject *module);
                static void initialize(PyObject *module);
              };
            }
          }
        }
      }
    }
  }
}

#endif
