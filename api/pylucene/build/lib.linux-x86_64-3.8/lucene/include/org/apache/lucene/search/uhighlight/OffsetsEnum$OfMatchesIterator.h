#ifndef org_apache_lucene_search_uhighlight_OffsetsEnum$OfMatchesIterator_H
#define org_apache_lucene_search_uhighlight_OffsetsEnum$OfMatchesIterator_H

#include "org/apache/lucene/search/uhighlight/OffsetsEnum.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace util {
    namespace function {
      class Supplier;
    }
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace search {
        class MatchesIterator;
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

          class OffsetsEnum$OfMatchesIterator : public ::org::apache::lucene::search::uhighlight::OffsetsEnum {
           public:
            enum {
              mid_init$_68e351299f5d03ba,
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

            explicit OffsetsEnum$OfMatchesIterator(jobject obj) : ::org::apache::lucene::search::uhighlight::OffsetsEnum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OffsetsEnum$OfMatchesIterator(const OffsetsEnum$OfMatchesIterator& obj) : ::org::apache::lucene::search::uhighlight::OffsetsEnum(obj) {}

            OffsetsEnum$OfMatchesIterator(const ::org::apache::lucene::search::MatchesIterator &, const ::java::util::function::Supplier &);

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
          extern PyType_Def PY_TYPE_DEF(OffsetsEnum$OfMatchesIterator);
          extern PyTypeObject *PY_TYPE(OffsetsEnum$OfMatchesIterator);

          class t_OffsetsEnum$OfMatchesIterator {
          public:
            PyObject_HEAD
            OffsetsEnum$OfMatchesIterator object;
            static PyObject *wrap_Object(const OffsetsEnum$OfMatchesIterator&);
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
