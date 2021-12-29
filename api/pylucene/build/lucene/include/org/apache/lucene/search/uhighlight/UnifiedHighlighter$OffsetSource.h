#ifndef org_apache_lucene_search_uhighlight_UnifiedHighlighter$OffsetSource_H
#define org_apache_lucene_search_uhighlight_UnifiedHighlighter$OffsetSource_H

#include "java/lang/Enum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {
          class UnifiedHighlighter$OffsetSource;
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
        namespace uhighlight {

          class UnifiedHighlighter$OffsetSource : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_4e354603e57d21a7,
              mid_values_b31f37b10fe83622,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit UnifiedHighlighter$OffsetSource(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            UnifiedHighlighter$OffsetSource(const UnifiedHighlighter$OffsetSource& obj) : ::java::lang::Enum(obj) {}

            static UnifiedHighlighter$OffsetSource *ANALYSIS;
            static UnifiedHighlighter$OffsetSource *NONE_NEEDED;
            static UnifiedHighlighter$OffsetSource *POSTINGS;
            static UnifiedHighlighter$OffsetSource *POSTINGS_WITH_TERM_VECTORS;
            static UnifiedHighlighter$OffsetSource *TERM_VECTORS;

            static UnifiedHighlighter$OffsetSource valueOf(const ::java::lang::String &);
            static JArray< UnifiedHighlighter$OffsetSource > values();
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
          extern PyType_Def PY_TYPE_DEF(UnifiedHighlighter$OffsetSource);
          extern PyTypeObject *PY_TYPE(UnifiedHighlighter$OffsetSource);

          class t_UnifiedHighlighter$OffsetSource {
          public:
            PyObject_HEAD
            UnifiedHighlighter$OffsetSource object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_UnifiedHighlighter$OffsetSource *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const UnifiedHighlighter$OffsetSource&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const UnifiedHighlighter$OffsetSource&, PyTypeObject *);
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
