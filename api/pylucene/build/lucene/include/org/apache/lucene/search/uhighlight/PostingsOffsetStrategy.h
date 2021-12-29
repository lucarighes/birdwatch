#ifndef org_apache_lucene_search_uhighlight_PostingsOffsetStrategy_H
#define org_apache_lucene_search_uhighlight_PostingsOffsetStrategy_H

#include "org/apache/lucene/search/uhighlight/FieldOffsetStrategy.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {
          class UnifiedHighlighter$OffsetSource;
          class OffsetsEnum;
          class UHComponents;
        }
      }
      namespace index {
        class LeafReader;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {

          class PostingsOffsetStrategy : public ::org::apache::lucene::search::uhighlight::FieldOffsetStrategy {
           public:
            enum {
              mid_init$_8858451d37bfc18c,
              mid_getOffsetSource_d592a7a3fc9567b1,
              mid_getOffsetsEnum_55596ccb3f6b81ab,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PostingsOffsetStrategy(jobject obj) : ::org::apache::lucene::search::uhighlight::FieldOffsetStrategy(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PostingsOffsetStrategy(const PostingsOffsetStrategy& obj) : ::org::apache::lucene::search::uhighlight::FieldOffsetStrategy(obj) {}

            PostingsOffsetStrategy(const ::org::apache::lucene::search::uhighlight::UHComponents &);

            ::org::apache::lucene::search::uhighlight::UnifiedHighlighter$OffsetSource getOffsetSource() const;
            ::org::apache::lucene::search::uhighlight::OffsetsEnum getOffsetsEnum(const ::org::apache::lucene::index::LeafReader &, jint, const ::java::lang::String &) const;
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
          extern PyType_Def PY_TYPE_DEF(PostingsOffsetStrategy);
          extern PyTypeObject *PY_TYPE(PostingsOffsetStrategy);

          class t_PostingsOffsetStrategy {
          public:
            PyObject_HEAD
            PostingsOffsetStrategy object;
            static PyObject *wrap_Object(const PostingsOffsetStrategy&);
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
