#ifndef org_apache_lucene_search_uhighlight_OffsetsEnum$MultiOffsetsEnum_H
#define org_apache_lucene_search_uhighlight_OffsetsEnum$MultiOffsetsEnum_H

#include "org/apache/lucene/search/uhighlight/OffsetsEnum.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
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

          class OffsetsEnum$MultiOffsetsEnum : public ::org::apache::lucene::search::uhighlight::OffsetsEnum {
           public:
            enum {
              mid_init$_d03990be0130160d,
              mid_close_f2cc1bce94666404,
              mid_endOffset_9972fcc56b44e79d,
              mid_freq_9972fcc56b44e79d,
              mid_getTerm_7af2ea2e37ce82b8,
              mid_nextPosition_8454bd5aa23fd11e,
              mid_startOffset_9972fcc56b44e79d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OffsetsEnum$MultiOffsetsEnum(jobject obj) : ::org::apache::lucene::search::uhighlight::OffsetsEnum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OffsetsEnum$MultiOffsetsEnum(const OffsetsEnum$MultiOffsetsEnum& obj) : ::org::apache::lucene::search::uhighlight::OffsetsEnum(obj) {}

            OffsetsEnum$MultiOffsetsEnum(const ::java::util::List &);

            void close() const;
            jint endOffset() const;
            jint freq() const;
            ::org::apache::lucene::util::BytesRef getTerm() const;
            jboolean nextPosition() const;
            jint startOffset() const;
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
          extern PyType_Def PY_TYPE_DEF(OffsetsEnum$MultiOffsetsEnum);
          extern PyTypeObject *PY_TYPE(OffsetsEnum$MultiOffsetsEnum);

          class t_OffsetsEnum$MultiOffsetsEnum {
          public:
            PyObject_HEAD
            OffsetsEnum$MultiOffsetsEnum object;
            static PyObject *wrap_Object(const OffsetsEnum$MultiOffsetsEnum&);
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
