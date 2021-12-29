#ifndef org_apache_lucene_search_uhighlight_OffsetsEnum$OfPostings_H
#define org_apache_lucene_search_uhighlight_OffsetsEnum$OfPostings_H

#include "org/apache/lucene/search/uhighlight/OffsetsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class PostingsEnum;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {

          class OffsetsEnum$OfPostings : public ::org::apache::lucene::search::uhighlight::OffsetsEnum {
           public:
            enum {
              mid_init$_c958065f3752090c,
              mid_init$_8e156756db2d6069,
              mid_endOffset_9972fcc56b44e79d,
              mid_freq_9972fcc56b44e79d,
              mid_getPostingsEnum_f6f6440dd886c6cd,
              mid_getTerm_7af2ea2e37ce82b8,
              mid_nextPosition_8454bd5aa23fd11e,
              mid_startOffset_9972fcc56b44e79d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OffsetsEnum$OfPostings(jobject obj) : ::org::apache::lucene::search::uhighlight::OffsetsEnum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OffsetsEnum$OfPostings(const OffsetsEnum$OfPostings& obj) : ::org::apache::lucene::search::uhighlight::OffsetsEnum(obj) {}

            OffsetsEnum$OfPostings(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::index::PostingsEnum &);
            OffsetsEnum$OfPostings(const ::org::apache::lucene::util::BytesRef &, jint, const ::org::apache::lucene::index::PostingsEnum &);

            jint endOffset() const;
            jint freq() const;
            ::org::apache::lucene::index::PostingsEnum getPostingsEnum() const;
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
          extern PyType_Def PY_TYPE_DEF(OffsetsEnum$OfPostings);
          extern PyTypeObject *PY_TYPE(OffsetsEnum$OfPostings);

          class t_OffsetsEnum$OfPostings {
          public:
            PyObject_HEAD
            OffsetsEnum$OfPostings object;
            static PyObject *wrap_Object(const OffsetsEnum$OfPostings&);
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
