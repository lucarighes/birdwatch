#ifndef org_apache_lucene_search_uhighlight_OffsetsEnum_H
#define org_apache_lucene_search_uhighlight_OffsetsEnum_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Comparable;
    class Class;
    class String;
  }
  namespace io {
    class Closeable;
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {
          class OffsetsEnum;
        }
      }
      namespace util {
        class BytesRef;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {

          class OffsetsEnum : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_close_f2cc1bce94666404,
              mid_compareTo_48fee69b089cc592,
              mid_endOffset_9972fcc56b44e79d,
              mid_freq_9972fcc56b44e79d,
              mid_getTerm_7af2ea2e37ce82b8,
              mid_nextPosition_8454bd5aa23fd11e,
              mid_startOffset_9972fcc56b44e79d,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OffsetsEnum(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OffsetsEnum(const OffsetsEnum& obj) : ::java::lang::Object(obj) {}

            static OffsetsEnum *EMPTY;

            OffsetsEnum();

            void close() const;
            jint compareTo(const OffsetsEnum &) const;
            jint endOffset() const;
            jint freq() const;
            ::org::apache::lucene::util::BytesRef getTerm() const;
            jboolean nextPosition() const;
            jint startOffset() const;
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
        namespace uhighlight {
          extern PyType_Def PY_TYPE_DEF(OffsetsEnum);
          extern PyTypeObject *PY_TYPE(OffsetsEnum);

          class t_OffsetsEnum {
          public:
            PyObject_HEAD
            OffsetsEnum object;
            static PyObject *wrap_Object(const OffsetsEnum&);
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
