#ifndef org_apache_lucene_search_vectorhighlight_FieldTermStack$TermInfo_H
#define org_apache_lucene_search_vectorhighlight_FieldTermStack$TermInfo_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Comparable;
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {
          class FieldTermStack$TermInfo;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {

          class FieldTermStack$TermInfo : public ::java::lang::Object {
           public:
            enum {
              mid_compareTo_0fd638c8d5761a8a,
              mid_equals_8b72f2dcdde6fd1d,
              mid_getEndOffset_9972fcc56b44e79d,
              mid_getNext_211d98576697f671,
              mid_getPosition_9972fcc56b44e79d,
              mid_getStartOffset_9972fcc56b44e79d,
              mid_getText_db9b55ba01e03e4b,
              mid_getWeight_58aec2b64dff50c8,
              mid_hashCode_9972fcc56b44e79d,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldTermStack$TermInfo(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldTermStack$TermInfo(const FieldTermStack$TermInfo& obj) : ::java::lang::Object(obj) {}

            jint compareTo(const FieldTermStack$TermInfo &) const;
            jboolean equals(const ::java::lang::Object &) const;
            jint getEndOffset() const;
            FieldTermStack$TermInfo getNext() const;
            jint getPosition() const;
            jint getStartOffset() const;
            ::java::lang::String getText() const;
            jfloat getWeight() const;
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
      namespace search {
        namespace vectorhighlight {
          extern PyType_Def PY_TYPE_DEF(FieldTermStack$TermInfo);
          extern PyTypeObject *PY_TYPE(FieldTermStack$TermInfo);

          class t_FieldTermStack$TermInfo {
          public:
            PyObject_HEAD
            FieldTermStack$TermInfo object;
            static PyObject *wrap_Object(const FieldTermStack$TermInfo&);
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
